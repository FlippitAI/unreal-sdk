// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "WebSocketsModule.h" // Module definition
#include "IWebSocket.h" 
#include "Sound/SoundWaveProcedural.h"
#include "Sound/AudioSettings.h"
#include "Sound/AmbientSound.h"
#include "Components/AudioComponent.h" // Include AudioComponent
#include "FlippitCharacter.generated.h"

UCLASS()
class FLIPPIT_API AFlippitCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AFlippitCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
public:
	// Sets default values for this actor's properties
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "avatr")
		FString glbURL = FString();
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "avatar")
		FString characterId = FString();
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "avatar")
		FString ApiKey = FString();
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "avatar")
		FString characterName = FString();
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "avatar")
		FString Messagesrecieved = FString();
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "avatar")
		int i ;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "avatar")
		float Delay;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "avatar")
		bool bMessageSentAndReceived = false;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "avatar")
		bool NotEmpy = false;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "avatar")
		bool Connected = false;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "avatar")
		bool Streaming = false;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "avatar")
		bool bAudioStreamingInProgress = false;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "avatar")
		FString animationKeys;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "avatar")
		FString destinationkey;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "avatar")
		FString AWSSecretKey;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "avatar")
		FString AWSKey;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "avatar")
		FString OpenAIKey;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "avatar")
		FString audioByte;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "avatar")
		TArray<USoundWave*> SoundWaveArray;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		class UBoxComponent* BoxCollisionComponent;



	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Animation")
		TMap<FString, UAnimationAsset*> WordToAnimationMap;
	// Array to store custom object information

	TSharedPtr<IWebSocket> WebSocket;
	bool bPlayerInInteractionZone;
	bool bPlayerInCollisionZone;
    bool notIn;  
    bool audioishere;
    bool hello;
	int32 CurrentIndex;
	FTimerHandle SoundFinishedHandle; // Declare the timer handle
	TSet<USoundWave*> PlayedSounds; // Declare the set to track played sounds
	FVector ActorLocation;
	FString TemporaryAnimationKey;
	AActor* LastVisitedActor = nullptr;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Custom Events")
		void heytriggerme();
	UFUNCTION(BlueprintCallable, Category = "WebSocket")
		void EstablishWebSocketConnection();

	// Function to send message over WebSocket

	UFUNCTION(BlueprintCallable, Category = "WebSocket")
		void SendWebSocketMessage(const FString& Message);

	// Function to close WebSocket connection
	UFUNCTION(BlueprintCallable, Category = "WebSocket")
		void CloseWebSocketConnection();

	// Function to handle player entering the interaction zone
	UFUNCTION(BlueprintCallable, Category = "Interaction")
		void OnPlayerEnterInteractionZone();

	// Function to handle player exiting the interaction zone
	UFUNCTION(BlueprintCallable, Category = "Interaction")
		void OnPlayerExitInteractionZone();
	// Function to handle player exiting the interaction zone
	UFUNCTION(BlueprintCallable, Category = "Interaction")
		FString HandleWebSocketMessage(const FString& Message);

	UFUNCTION(BlueprintCallable, Category = "WebSocket")
		void SendChatMessage(const FString& chatMessage);
	UFUNCTION(BlueprintCallable, Category = "WebSocket")
		void ConnectToWebSocket();
	UFUNCTION(BlueprintCallable, Category = "WebSocket")
		bool NotEmpty();
	UFUNCTION(BlueprintCallable, Category = "Animation")
		FString animationSetformresponse(FString animation);
	UFUNCTION(BlueprintCallable, Category = "Animation")
		void LogNamesOfAllObjectsInLevel();
	UFUNCTION(BlueprintCallable, Category = "Animation")
		FVector GetLocationOfActorByName(const FString& ActorNameToFind);
	UFUNCTION(BlueprintCallable, Category = "Animation")
		void DecodeAudioString(const FString& EncodedAudioString);
	UFUNCTION(BlueprintCallable, Category = "Animation")
		void PlaySoundsSequentially();

	UFUNCTION(BlueprintCallable, Category = "Animation")
		bool DeleteFile();
	UFUNCTION(BlueprintCallable, Category = "Animation")
		void OnEKeyPressed();
	UFUNCTION(BlueprintCallable, Category = "Animation")
		void OnEKeyReleased();
	UFUNCTION(BlueprintCallable, Category = "Animation")
		void SimulateForLoop(int32 FirstIndex, int32 LastIndex, float DelayBetweenLoops);

	UFUNCTION()
		void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	// Function called when player exits the collision zone
	UFUNCTION()
		void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UFUNCTION(BlueprintCallable, Category = "Animation")
		UAnimationAsset* AssignAnimationToString(FString Word1, UAnimationAsset* AnimationAsset1, FString Word2, UAnimationAsset* AnimationAsset2, FString Word3, UAnimationAsset* AnimationAsset3, FString Word4, UAnimationAsset* AnimationAsset4, FString Word5, UAnimationAsset* AnimationAsset5, FString Word6, UAnimationAsset* AnimationAsset6, FString Word7, UAnimationAsset* AnimationAsset7, FString Word8, UAnimationAsset* AnimationAsset8, FString Word9, UAnimationAsset* AnimationAsset9, FString Word10, UAnimationAsset* AnimationAsset10, FString Word11, UAnimationAsset* AnimationAsset11, FString Word12, UAnimationAsset* AnimationAsset12, FString Word13, UAnimationAsset* AnimationAsset13, FString ReceivedKey);


};




