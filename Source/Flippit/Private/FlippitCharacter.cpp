// Fill out your copyright notice in the Description page of Project Settings.


#include "FlippitCharacter.h"
#include "WebSocketsModule.h"
#include "IWebSocket.h"
#include <Kismet/GameplayStatics.h>
#include "GameFramework/PlayerController.h"
#include "NavigationSystem.h" // Include for UNavigationSystemV1
#include "NavigationPath.h"   // Include for FNavPathSharedPtr
#include "AIController.h"     // Include for AAIController
#include "GameFramework/CharacterMovementComponent.h" // Include for UCharacterMovementComponent
#include "Serialization/JsonSerializer.h"
#include "Dom/JsonObject.h"
#include "FileHelpers.h"
#include "Misc/FileHelper.h"
#include "AudioMixerBlueprintLibrary.h"
#include "Sound/SoundWave.h"
#include "Misc/Paths.h"
#include "Components/BoxComponent.h"

// Sets default values
AFlippitCharacter::AFlippitCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
    // Initialize WebSocket as nullptr
    WebSocket = nullptr;
    bMessageSentAndReceived = false;
    BoxCollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
    BoxCollisionComponent->SetupAttachment(GetRootComponent());
    BoxCollisionComponent->OnComponentBeginOverlap.AddDynamic(this, &AFlippitCharacter::OnBeginOverlap);
    BoxCollisionComponent->OnComponentEndOverlap.AddDynamic(this, &AFlippitCharacter::OnEndOverlap);

}

// Called when the game starts or when spawned
void AFlippitCharacter::BeginPlay()
{
	Super::BeginPlay();
  
}

// Called every frame
void AFlippitCharacter::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    if (APlayerController* PC = UGameplayStatics::GetPlayerController(this, 0)) // 0 is the index of the local player
    {
        if (bPlayerInInteractionZone)
        {
            if (PC->WasInputKeyJustPressed(Key))  
            {
                if (GetWorld() != nullptr && GetWorld()->IsPlayInEditor())
                {
                    UFunction* fm = FindFunction(FName(TEXT("Pressed")));
                    if (fm)
                    {
                        ProcessEvent(fm, (void*)nullptr);

                    }
                    else {
                        // Handle the case where the function "Pressedd" was not found
                    }
                }
            }
            if (PC->WasInputKeyJustReleased(Key)) // Change "E" to "Tab"
            {
                if (GetWorld() != nullptr && GetWorld()->IsPlayInEditor())
                {
                    UFunction* fm = FindFunction(FName(TEXT("Released")));
                    if (fm)
                    {

                        ProcessEvent(fm, (void*)nullptr);

                    }
                    else {
                        // Handle the case where the function "Releaseed" was not found
                    }
                }
            }
        }
    }
    if (GetWorld() != nullptr && !GetWorld()->IsPlayInEditor())
    {
        // Simulation is running, perform actions for running simulation
        // ...

        // Example: Disconnect the websocket if it's running
        WebSocket->Close();
    }
 }

 //Called to bind functionality to input
void AFlippitCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
    InputComponent->BindAction("Pushed me to talk", IE_Pressed, this, &AFlippitCharacter::OnEKeyPressed);
    InputComponent->BindKey(EKeys::E, IE_Released, this, &AFlippitCharacter::OnEKeyReleased);
}

void AFlippitCharacter::ConnectToWebSocket()
{
    if (!WebSocket.IsValid() || !WebSocket->IsConnected())
    {
        EstablishWebSocketConnection();
    }
}
void AFlippitCharacter::EstablishWebSocketConnection()
{
    if (!WebSocket.IsValid())
    {
        const FString APIKey = ApiKey; // Replace with your Flippit access key
        const FString CharacterID = characterId; // Replace with your character ID

        // Construct the WebSocket URL with the access key and character ID
        FString ServerURL = FString::Printf(TEXT("wss://ozmcki0ooj.execute-api.eu-west-1.amazonaws.com/production?Authorizer=%s&characterId=%s"), *APIKey, *CharacterID);

        // Create the WebSocket instance with the specified URL and headers
        TMap<FString, FString> Headers;
        Headers.Add(TEXT("Origin"), TEXT("Unreal")); // Add the Origin header

        WebSocket = FWebSocketsModule::Get().CreateWebSocket(ServerURL, TEXT("wss"), Headers);

        if (WebSocket.IsValid())
        {
            WebSocket->OnConnected().AddLambda([this]() {
                UE_LOG(LogTemp, Warning, TEXT("WebSocket connected."));
                });

            WebSocket->OnMessage().AddLambda([this](const FString& Message) {
                HandleWebSocketMessage(Message);
                });

            WebSocket->OnConnectionError().AddLambda([](const FString& Error) {
                UE_LOG(LogTemp, Error, TEXT("WebSocket connection error: %s"), *Error);
                });

            WebSocket->OnClosed().AddLambda([](int32 StatusCode, const FString& Reason, bool bWasClean) {
                });

            WebSocket->Connect();
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("Failed to create WebSocket."));
        }
    }
}


void AFlippitCharacter::SendChatMessage(const FString& chatMessage)
{
    if (WebSocket.IsValid() && WebSocket->IsConnected())
    {
        Streaming = false;
        i = 0;
        SoundWaveArray.Empty();

        TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
        JsonObject->SetStringField("action", "chat");
        JsonObject->SetStringField("prompt", chatMessage);


        FString JsonString;
        TSharedRef<TJsonWriter<TCHAR>> JsonWriter = TJsonWriterFactory<>::Create(&JsonString);
        FJsonSerializer::Serialize(JsonObject.ToSharedRef(), JsonWriter);

        SendWebSocketMessage(JsonString);

        Messagesrecieved = FString();
        audioByte = FString();
        bMessageSentAndReceived = false;
        notIn = false;

    }
}

void AFlippitCharacter::SendWebSocketMessage(const FString& Message)
{
    if (WebSocket.IsValid() && WebSocket->IsConnected())
    {
        WebSocket->Send(Message);
    }
}
bool AFlippitCharacter::NotEmpty()
{
    if (!Messagesrecieved.IsEmpty())
    {
        return true;
        heytriggerme();
    }
    else
    {
        return false;
    }

}

void AFlippitCharacter::CloseWebSocketConnection()
{
    if (WebSocket.IsValid())
    {
        WebSocket->Close();
        WebSocket.Reset();
    }
}
FString AFlippitCharacter::HandleWebSocketMessage(const FString& Message)
{
    FString replies;

    if (Message.IsEmpty())
    {
    }
    else
    {
        TSharedPtr<FJsonObject> JsonObject;
        TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(Message);
        if (FJsonSerializer::Deserialize(JsonReader, JsonObject))
        {

            FString msgType = JsonObject->GetStringField("msg_type");

            if (msgType == "animation_key")
            {
                FString animationKey = JsonObject->GetStringField("value");
                if (animationKey.StartsWith("'"))
                {
                    animationKey.RemoveAt(0); // Remove the first character
                }

                // Check if animationKey ends with a single quotation mark ('), and if so, remove it.
                if (animationKey.EndsWith("'"))
                {
                    animationKey.RemoveAt(animationKey.Len() - 1); // Remove the last character
                }




                animationKeys = animationKey;
                if (GetWorld() != nullptr && GetWorld()->IsPlayInEditor())
                {
                    UFunction* func = FindFunction(FName(TEXT("streamanimation")));
                    if (func)
                    {
                        ProcessEvent(func, (void*)nullptr);
                    }
                    else {
                    }
                }

            }
            else if (msgType == "chat_chunk")
            {
                FString chatChunk = JsonObject->GetStringField("value");
                //UE_LOG(LogTemp, Error, TEXT("Reply %s"), *chatChunk);
                Streaming = true;

                // Append the received chat chunk to replies
                if (!Messagesrecieved.IsEmpty())
                {
                    Messagesrecieved += TEXT(" "); // Add a space separator
                }

                Messagesrecieved += chatChunk;
                if (GetWorld() != nullptr && GetWorld()->IsPlayInEditor())
                {
                    UFunction* fn = FindFunction(FName(TEXT("message")));
                    if (fn)
                    {

                        ProcessEvent(fn, (void*)nullptr);

                    }
                    else {
                    }
                }
            }
            else if (msgType == "audio")
            {
                // Extract the content of the "audio_bytes" field
                FString audioBytes = JsonObject->GetStringField("audio_bytes");

                // Now you can use the "audioBytes" for further processing
                audioByte = audioBytes;
                DecodeAudioString(audioBytes);
            }

            FString terminatorValue = JsonObject->GetStringField("value");

            if (terminatorValue != "DONE")
            {
                // Append replies to Messagesrecieved as long as terminatorValue is not "DONE"
            }
            if (terminatorValue == "DONE")
            {
                if (GetWorld() != nullptr && GetWorld()->IsPlayInEditor())
                { // Code to execute after the delay
                    UFunction* fa = FindFunction(FName(TEXT("Done")));
                    if (fa)
                    {


                        ProcessEvent(fa, (void*)nullptr);

                    }
                    else {
                    }
                }
                if (animationKeys.StartsWith("W"))
                {
                    // Extract the "destination" value
                    FString destination = animationKeys.RightChop(5); // Remove "walk:" from the beginning

                    destinationkey = destination;
                    if (GetWorld() != nullptr && GetWorld()->IsPlayInEditor())
                    { // Code to execute after the delay
                        UFunction* fn = FindFunction(FName(TEXT("Streamwalking")));
                        if (fn)
                        {


                                ProcessEvent(fn, (void*)nullptr);
                            
                        }
                        else {
                        }
                    }

                }
                else
                {
                    //UE_LOG(LogTemp, Error, TEXT("Failed to parse JSON message: %s"), *Message);
                }
            }
            if (i==1)
            {
                if (GetWorld() != nullptr && GetWorld()->IsPlayInEditor())
                {

                    UFunction* func = FindFunction(FName(TEXT("TTS")));
                    if (func)
                    {
                        
                            ProcessEvent(func, (void*)nullptr);
                        
                    }
                    else {
                    }
                }
                }
                
            
        }

    }
        return Messagesrecieved;

}

// ...


void AFlippitCharacter::DecodeAudioString(const FString& EncodedAudioString)
{ 
    TArray<uint8> DecodedAudioBytes;
    TQueue<FString> AudioQueue;
    if (FBase64::Decode(EncodedAudioString, DecodedAudioBytes))
    {
        Streaming = true;
       
        // Step 2: Specify the file path where you want to save the audio
        FString SaveDirectory = FPaths::ProjectSavedDir();
        FString FileName = FString::Printf(TEXT("Sounds/MyAudio%d.mp3"),i);
        FString FilePath = FPaths::Combine(SaveDirectory, FileName);
        i++;
        // Enqueue the file path
        AudioQueue.Enqueue(FilePath);
        // Increment the index for the next audio file

        // Step 3: Use FFileHelper to save the byte array as an audio file
        if (FFileHelper::SaveArrayToFile(DecodedAudioBytes, *FilePath))
        {

            UFunction* func = FindFunction(FName(TEXT("Import")));
            if (func)
            {
                if (GetWorld() != nullptr && GetWorld()->IsPlayInEditor()) {


                    ProcessEvent(func, (void*)nullptr);
                }
            }
            else {
            }
            // Now, you can use the audio file as needed.
        }
        else
        {
        }
    }
    else
    {
    }
}
void AFlippitCharacter::PlaySoundsSequentially()
{
    while (CurrentIndex < SoundWaveArray.Num())
    {
        // Get the current sound to play
        USoundWave* SoundToPlay = SoundWaveArray[CurrentIndex];

        // Increment the index for the next sound
        CurrentIndex++;

        // Check if the sound is valid and has a duration greater than zero
        if (SoundToPlay && SoundToPlay->Duration > 0.0f)
        {
            // Check if this sound has already been played
           
            
                // Mark this sound as played
                PlayedSounds.Add(SoundToPlay);

                // Play the sound
                UGameplayStatics::PlaySound2D(GetWorld(), SoundToPlay);

                // Set a timer to call PlaySoundsSequentially again after the current sound finishes
                float SoundDuration = SoundToPlay->Duration;
                FTimerDelegate TimerDelegate;
                TimerDelegate.BindUFunction(this, FName("PlaySoundsSequentially"));
                GetWorld()->GetTimerManager().SetTimer(SoundFinishedHandle, TimerDelegate, SoundDuration, false);
                return; // Exit the function to wait for the sound to finish
                if (SoundDuration < 1.0)
                {
                    GetWorld()->GetTimerManager().SetTimer(SoundFinishedHandle, TimerDelegate, 1.0 , false);


            }
        }
    }

    // All sounds have been played or the array is empty, clear the array
    SoundWaveArray.Empty();
    CurrentIndex = 0;
    PlayedSounds.Empty();
}


bool AFlippitCharacter::DeleteFile()
{
    IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
    FString SaveDirectory = FPaths::ProjectSavedDir();
    FString FileName = FString::Printf(TEXT("Sounds/MyAudio0.mp3"));
    FString FilePath = FPaths::Combine(SaveDirectory, FileName);
    // Check if the file exists before attempting to delete it
    if (PlatformFile.FileExists(*FilePath))
    {
        // Attempt to delete the file
        if (PlatformFile.DeleteFile(*FilePath))
        {
            // File deletion was successful
            return true;
        }
        else
        {
            // File deletion failed
            return false;
        }
    }
    else
    {
        // The file does not exist
        return false;
    }
}


void AFlippitCharacter::OnPlayerEnterInteractionZone()
{
    bPlayerInInteractionZone = true;
    Connected = false;
    ConnectToWebSocket(); // Connect WebSocket when player enters zone

    // Send chat message when WebSocket is fully connected
    if (WebSocket.IsValid() && WebSocket->IsConnected())
    {
        Connected = true;
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("WebSocket is not fully connected yet. Waiting for connection."));
        // Handle the scenario appropriately
    }
}

void AFlippitCharacter::OnPlayerExitInteractionZone()
{
    bPlayerInInteractionZone = false;
    CloseWebSocketConnection(); // Close WebSocket when player exits zone
}
UAnimationAsset* AFlippitCharacter::AssignAnimationToString(FString Word1, UAnimationAsset* AnimationAsset1, FString Word2, UAnimationAsset* AnimationAsset2, FString Word3, UAnimationAsset* AnimationAsset3, FString Word4, UAnimationAsset* AnimationAsset4, FString Word5, UAnimationAsset* AnimationAsset5, FString Word6, UAnimationAsset* AnimationAsset6, FString Word7, UAnimationAsset* AnimationAsset7, FString Word8, UAnimationAsset* AnimationAsset8, FString Word9, UAnimationAsset* AnimationAsset9, FString Word10, UAnimationAsset* AnimationAsset10, FString Word11, UAnimationAsset* AnimationAsset11, FString Word12,UAnimationAsset* AnimationAsset12, FString Word13,UAnimationAsset* AnimationAsset13, FString ReceivedKey)
{
    UAnimationAsset* AssignedAnimation = nullptr;

    // Declare a TMap to store word-to-animation associations

    // Associate words with animation assets
    WordToAnimationMap.Add(Word1, AnimationAsset1);
    WordToAnimationMap.Add(Word2, AnimationAsset2);
    WordToAnimationMap.Add(Word3, AnimationAsset3);
    WordToAnimationMap.Add(Word4, AnimationAsset4);
    WordToAnimationMap.Add(Word5, AnimationAsset5);
    WordToAnimationMap.Add(Word6, AnimationAsset6);
    WordToAnimationMap.Add(Word7, AnimationAsset7);
    WordToAnimationMap.Add(Word8, AnimationAsset8);
    WordToAnimationMap.Add(Word9, AnimationAsset9);
    WordToAnimationMap.Add(Word10, AnimationAsset10);
    WordToAnimationMap.Add(Word11, AnimationAsset11);
    WordToAnimationMap.Add(Word12, AnimationAsset12);
    WordToAnimationMap.Add(Word13, AnimationAsset13);

    // Check if the received key matches any of the words in the map
    if (WordToAnimationMap.Contains(ReceivedKey))
    {
        // Assign the corresponding animation asset
        AssignedAnimation = WordToAnimationMap[ReceivedKey];
    }
    else
    {
        // If no match was found, assign the "Talking" animation asset here
        AssignedAnimation = AnimationAsset1; // Replace with your "Talking" animation asset reference
    }

    // Return the assigned animation asset (or nullptr if no match was found)
    return AssignedAnimation;
}


FString AFlippitCharacter::animationSetformresponse(FString animation)
{
    return animation;
}

void AFlippitCharacter::LogNamesOfAllObjectsInLevel()
{
    // Get the current level
    UWorld* CurrentWorld = GetWorld();
    if (CurrentWorld)
    {
        // Get all actors in the current level
        TArray<AActor*> LevelActors;
        UGameplayStatics::GetAllActorsOfClass(CurrentWorld, AActor::StaticClass(), LevelActors);

        // Iterate through the actors and log their Outliner names
        for (AActor* Actor : LevelActors)
        {
            FString OutlinerName = Actor->GetActorLabel();
        }
    }
}


FVector AFlippitCharacter::GetLocationOfActorByName(const FString& ActorNameToFind)
{
    // Get the current level
    UWorld* CurrentWorld = GetWorld();
    if (CurrentWorld)
    {
        // Get all actors in the current level
        TArray<AActor*> LevelActors;
        UGameplayStatics::GetAllActorsOfClass(CurrentWorld, AActor::StaticClass(), LevelActors);

        // Initialize variables to keep track of the closest actor and its distance
        AActor* ClosestActor = nullptr;
        float ClosestDistanceSquared = BIG_NUMBER; // A large initial value

        // Get the character's current location
        FVector CharacterLocation = GetActorLocation();

        // Iterate through the actors to find actors whose names contain ActorNameToFind
        for (AActor* Actor : LevelActors)
        {
            // Check if the actor's name contains ActorNameToFind (case insensitive)
            FString ActorName = Actor->GetActorLabel();
            if (ActorName.Contains(ActorNameToFind, ESearchCase::IgnoreCase))
            {
                // Skip the actor if it's at the character's location or it's the last visited actor
                 ActorLocation = Actor->GetActorLocation();
                if (ActorLocation == CharacterLocation || Actor == LastVisitedActor)
                {
                    continue;
                }

                // Calculate the squared distance to this actor from the character
                float DistanceSquared = FVector::DistSquared(CharacterLocation, ActorLocation);

                // If this actor is closer than the previous closest actor, update it
                if (DistanceSquared < ClosestDistanceSquared)
                {
                    ClosestActor = Actor;
                    ClosestDistanceSquared = DistanceSquared;
                }
            }
        }

        // Update the last visited actor
        LastVisitedActor = ClosestActor;

        // If a matching actor was found, return its location
        if (ClosestActor)
        {
            return ClosestActor->GetActorLocation();
        }
    }

    // If no matching actor is found or the level does not exist, return an invalid location
    return FVector::ZeroVector;
}






void AFlippitCharacter::OnEKeyPressed()
{
    
        // Check if the character is overlapping with the Box Collision Component
    if (bPlayerInCollisionZone)
    {
        // Perform the desired action when "E" key is pressed
        // This might involve sending a message to the NPC via WebSocket or other actions
    }
}
void AFlippitCharacter::OnEKeyReleased()
{
    
        // Check if the character is overlapping with the Box Collision Component
    if (bPlayerInCollisionZone)

        {
        }
    
}
void AFlippitCharacter::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    if (OtherActor->IsA(APawn::StaticClass()))
    {
        bPlayerInCollisionZone = true;
    }
}

// Function called when player exits the collision zone
void AFlippitCharacter::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
    if (OtherActor->IsA(APawn::StaticClass()))
    {
        // The player character has exited the collision zone
        bPlayerInCollisionZone = false;
    }
}

void AFlippitCharacter::SimulateForLoop(int32 FirstIndex, int32 LastIndex, float DelayBetweenLoops)
{
    // Check if the current index is within the desired range
    if (CurrentIndex >= FirstIndex && CurrentIndex <= LastIndex)
    {
        
        UFunction* fn = FindFunction(FName(TEXT("Audio")));
        if (fn)
        {
            if (GetWorld() != nullptr && GetWorld()->IsPlayInEditor())
            {
                ProcessEvent(fn, (void*)nullptr);
            }
        }
        else {
        }
        CurrentIndex++;

        // Schedule the next iteration with a delay
        FTimerHandle TimerHandle;
        FTimerDelegate TimerDelegate;

        TimerDelegate.BindLambda([this, FirstIndex, LastIndex, DelayBetweenLoops]() {
            // Call the function recursively for the next iteration
            SimulateForLoop(FirstIndex, LastIndex, DelayBetweenLoops);
            });

        // Set the timer to execute the next iteration after the specified delay
        GetWorldTimerManager().SetTimer(TimerHandle, TimerDelegate, DelayBetweenLoops, false);
    }
    else
    {
        // The loop has finished, reset the current index
        CurrentIndex = 0;
        
    }
}