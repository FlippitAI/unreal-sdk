#include "FlippitEditor.h"
#include "FlippitEditorStyle.h"
#include "FlippitEditorCommands.h"
#include "LevelEditor.h"
#include "Widgets/Docking/SDockTab.h"
#include "Widgets/Layout/SBox.h"
#include "HttpModule.h"
#include "Interfaces/IHttpRequest.h"
#include "Interfaces/IHttpResponse.h"
#include "Widgets/Notifications/SNotificationList.h"
#include "Framework/Notifications/NotificationManager.h"
#include "Serialization/JsonSerializer.h"
#include "Dom/JsonObject.h"
#include <Brushes/SlateImageBrush.h>
#include "Engine/World.h"           
#include "FlippitBPLibrary.h"
#include "Blueprint/UserWidget.h"
#include <Kismet/GameplayStatics.h>
#include <FlippitCharacter.h>
#include "Interfaces/IPluginManager.h"
#include "Dom/JsonValue.h"                // For working with JSON values
#include "Serialization/JsonReader.h"      // JSON reader
#include "Serialization/JsonWriter.h"     
#include "JsonUtilities/Public/JsonUtilities.h"
#include <Widgets/Layout/SConstraintCanvas.h>
#include <Widgets/Layout/SUniformGridPanel.h>


static const FName FlippitEditorTabName("FlippitEditor");

#define LOCTEXT_NAMESPACE "FFlippitEditorModule"


void FFlippitEditorModule::StartupModule()
{
    // This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module

    FFlippitEditorStyle::Initialize();
    FFlippitEditorStyle::ReloadTextures();

    FFlippitEditorCommands::Register();

    PluginCommands = MakeShareable(new FUICommandList);

    PluginCommands->MapAction(
        FFlippitEditorCommands::Get().OpenPluginWindow,
        FExecuteAction::CreateRaw(this, &FFlippitEditorModule::PluginButtonClicked),
        FCanExecuteAction());

    UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FFlippitEditorModule::RegisterMenus));

    FGlobalTabmanager::Get()->RegisterNomadTabSpawner(FlippitEditorTabName, FOnSpawnTab::CreateRaw(this, &FFlippitEditorModule::OnSpawnPluginTab))
        .SetDisplayName(LOCTEXT("FFlippitEditorTabTitle", "FlippitEditor"))
        .SetMenuType(ETabSpawnerMenuType::Hidden);
    FEditorDelegates::OnMapOpened.AddLambda([](const FString& MapFilename, bool bAsTemplate) {
        FName MyFlippitActorTag = TEXT("MyFlippitActorTag");

        // Get the editor world context
        UWorld* World = GEditor ? GEditor->GetEditorWorldContext().World() : nullptr;

        if (World)
        {
            TArray<AActor*> FoundActors;
            UGameplayStatics::GetAllActorsWithTag(World, MyFlippitActorTag, FoundActors);

            if (FoundActors.Num() > 0)
            {
                for (AActor* Actor : FoundActors)
                {
                    // Instantiate the actors found with the tag
                    if (Actor)
                    {
                        // Now you can work with MyFlippitActor here

                        // You can call your CustomEvent_1 here or perform other actions.
                        UFunction* Func = Actor->FindFunction(FName(TEXT("Reload Skin")));
                        if (Func)
                        {
                            Actor->ProcessEvent(Func, (void*)nullptr);
                        }
                        else
                        {
                        }
                    }
                    else
                    {
                    }
                }
            }
            else
            {
            }
        }
        else
        {
        }
        });
    
}

void FFlippitEditorModule::ShutdownModule()
{
    // This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
    // we call this function before unloading the module.

    UToolMenus::UnRegisterStartupCallback(this);

    UToolMenus::UnregisterOwner(this);

    FFlippitEditorStyle::Shutdown();

    FFlippitEditorCommands::Unregister();

    FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(FlippitEditorTabName);
}


TSharedRef<SDockTab> FFlippitEditorModule::OnSpawnPluginTab(const FSpawnTabArgs& SpawnTabArgs)
{
    TSharedRef<SDockTab> Tab = SNew(SDockTab)
        .TabRole(ETabRole::NomadTab);

    Tab->SetContent(SNew(SFlippitWidget));

    return Tab;
}

void FFlippitEditorModule::PluginButtonClicked()
{
    FGlobalTabmanager::Get()->TryInvokeTab(FlippitEditorTabName);

}



void FFlippitEditorModule::RegisterMenus()
{
    // Owner will be used for cleanup in call to UToolMenus::UnregisterOwner
    FToolMenuOwnerScoped OwnerScoped(this);

    {
        UToolMenu* Menu = UToolMenus::Get()->ExtendMenu("LevelEditor.MainMenu.Window");
        {
            FToolMenuSection& Section = Menu->FindOrAddSection("WindowLayout");
            Section.AddMenuEntryWithCommandList(FFlippitEditorCommands::Get().OpenPluginWindow, PluginCommands);
        }
    }

    {
        UToolMenu* ToolbarMenu = UToolMenus::Get()->ExtendMenu("LevelEditor.LevelEditorToolBar");
        {
            FToolMenuSection& Section = ToolbarMenu->FindOrAddSection("Settings");
            {
                FToolMenuEntry& Entry = Section.AddEntry(FToolMenuEntry::InitToolBarButton(FFlippitEditorCommands::Get().OpenPluginWindow));
                Entry.SetCommandList(PluginCommands);
            }
        }
    }

}
// Copyright Epic Games, Inc. All Rights Reserved.



void SFlippitWidget::Construct(const FArguments& InArgs)
{
    bLoggedIn = false;
    parsed = false;

    // Define the image path (replace "YourImageName" with the actual image name)
 
    // Create an FSlateImageBrush

    const FSlateBrush* ImageBrush = FFlippitEditorStyle::Get().GetBrush("FlippitEditor.OpenPluginWindow");

        if (bLoggedIn)
    {
        if (parsed)
        {
            // Create character UI if logged in
            CharacterUI(Characters);
        }

        else
        {
            ChildSlot
                [
                    SNew(SVerticalBox)

                    + SVerticalBox::Slot()
                .HAlign(HAlign_Center)
                .VAlign(VAlign_Top)
                [
                    // Display the image
                    SNew(SImage)
                    .Image(ImageBrush)
                ]


            + SVerticalBox::Slot()
                .HAlign(HAlign_Center)
                .VAlign(VAlign_Center)
                [
                    SNew(STextBlock)
                    .Text(LOCTEXT("WelcomeText", "Welcome to Flippit!"))
                .Font(FSlateFontInfo(FPaths::EngineContentDir() / TEXT("Slate/Fonts/Roboto-Bold.ttf"), 24))
                .MinDesiredWidth(100.0f) // Set the desired width
                ]
            + SVerticalBox::Slot()
                .HAlign(HAlign_Center)
                .VAlign(VAlign_Center)
                [
                    SNew(SBox)
                    .WidthOverride(100.0f) // Set the fixed width here
                [
                    SAssignNew(UsernameInput, SEditableTextBox)
                    .HintText(LOCTEXT("UsernameHint", "Username"))
                ]
                ]

            + SVerticalBox::Slot()
                .HAlign(HAlign_Center)
                .VAlign(VAlign_Center)
                [
                    SNew(SBox)
                    .WidthOverride(100.0f) // Set the fixed width here
                [
                    SAssignNew(PasswordInput, SEditableTextBox)
                    .HintText(LOCTEXT("PasswordHint", "Password"))
                .IsPassword(true) // This line makes it a password field with stars
                ]
                ]


            + SVerticalBox::Slot()
                .HAlign(HAlign_Center)
                .VAlign(VAlign_Center)

                [
                    SNew(SButton)
                    .ButtonColorAndOpacity(FLinearColor(1.0f, 0.8f, 0.0f))
                .OnClicked(this, &SFlippitWidget::HandleLoginButtonClicked)
                .HAlign(HAlign_Center)  // Center the text horizontally
                .VAlign(VAlign_Center)  // Center the text vertically
                .Content()
                [
                    SNew(STextBlock)
                    .Text(LOCTEXT("LoginButton", "Login"))
                ]
                ]
                ];
        }
    }

        else
        {
            ChildSlot
                [
                    SNew(SOverlay)

                    + SOverlay::Slot()
                .HAlign(HAlign_Center)
                .VAlign(VAlign_Center)
                [
                    SNew(SVerticalBox)

                    + SVerticalBox::Slot()
                .AutoHeight()
                .Padding(FMargin(0.0f, 0.0f, 0.0f, 20.0f)) // Add a small margin at the bottom
                [
                    // Display the image
                    SNew(SBox)
                    .WidthOverride(200.0f) // Set the width of the image
                .HeightOverride(200.0f) // Set the height of the image
                [
                    SNew(SImage)
                    .Image(ImageBrush) // Use a function to get the image brush
                ]
                ]

            + SVerticalBox::Slot()
                .AutoHeight()
                .Padding(FMargin(0.0f, 10.0f, 0.0f, 30.0f)) // Add small margins at the top and bottom
                [
                    SNew(STextBlock)
                    .Text(LOCTEXT("WelcomeText", "Welcome to Flippit!"))
                .Font(FSlateFontInfo(FPaths::EngineContentDir() / TEXT("Slate/Fonts/Roboto-Bold.ttf"), 24))
                .MinDesiredWidth(100.0f)
                ]

            + SVerticalBox::Slot()
                .AutoHeight()
                .Padding(FMargin(50.0f, 10.0f, 50.0f, 10.0f)) // Add small margins at the top and bottom
                [
                    SNew(SBox)
                    .WidthOverride(80.0f)
                [
                    SAssignNew(UsernameInput, SEditableTextBox)
                    .HintText(LOCTEXT("UsernameHint", "Username"))
                ]
                ]

            + SVerticalBox::Slot()
                .AutoHeight()
                .Padding(FMargin(50.0f, 10.0f, 50.0f, 10.0f)) // Add small margins at the top and bottom
                [
                    SNew(SBox)
                    .WidthOverride(80.0f)
                [
                    SAssignNew(PasswordInput, SEditableTextBox)
                    .HintText(LOCTEXT("PasswordHint", "Password"))
                .IsPassword(true)
                ]
                ]

            + SVerticalBox::Slot()
                .AutoHeight()
                .Padding(FMargin(100.0f, 10.0f, 100.0f, 0.0f)) // Add a small margin at the top
                [

                    SNew(SButton)
                    .ButtonColorAndOpacity(FLinearColor(1.0f, 0.8f, 0.0f))
                .OnClicked(this, &SFlippitWidget::HandleLoginButtonClicked)
                .HAlign(HAlign_Center)  // Center the text horizontally
                .VAlign(VAlign_Center)  // Center the text vertically
                .Content()
                [
                    SNew(STextBlock)
                    .Text(LOCTEXT("LoginButton", "Login"))
                ]

                ]
                ]
            ];



        }
}





FReply SFlippitWidget::HandleLoginButtonClicked()
{
    PerformLogin();
    return FReply::Handled();
}

void SFlippitWidget::PerformLogin()
{
    // Construct the API URL for login
    FString Url = TEXT("https://studio-api.flippit.ai/api/v1/auth/loginJSON");

    // Create a request object
    HttpRequest = FHttpModule::Get().CreateRequest();
    HttpRequest->SetURL(Url);
    HttpRequest->SetVerb(TEXT("POST"));
    HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    HttpRequest->SetHeader(TEXT("Authorization"), FString::Printf(TEXT("Bearer %s"), TEXT("M4eZwqvHga9bjsY8"))); // Set your API key

    // Construct the request body in JSON format
    FString Username = UsernameInput->GetText().ToString();
    FString Password = PasswordInput->GetText().ToString();
    FString JsonRequestBody = FString::Printf(TEXT("{\"username\":\"%s\",\"password\":\"%s\"}"), *Username, *Password);
    HttpRequest->SetContentAsString(JsonRequestBody);

    // Set up a response handler
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &SFlippitWidget::OnLoginRequestComplete);

    // Execute the request
    HttpRequest->ProcessRequest();

    bLoggedIn = true;

    // Update UI to show character buttons
}

void SFlippitWidget::OnLoginRequestComplete(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
    if (Response.IsValid())
    {
        FString ResponseContent = Response->GetContentAsString();

        if (ResponseContent.Contains(TEXT("access_token")))
        {
            ExtractTokens(ResponseContent);
            FetchAndStoreAPIKeys();

            UseCharacterData();
            bLoggedIn = true; // Update login status
            // Update UI to show character buttons
            // Display a notification for login success
            FNotificationInfo SuccessInfo(LOCTEXT("LoginSuccess", "Login succeeded!"));
            SuccessInfo.FadeOutDuration = 2.0f;
            SuccessInfo.bUseLargeFont = false;
            FSlateNotificationManager::Get().AddNotification(SuccessInfo);

            // Perform the transition to character UI after successfully fetching character data
        }
        else
        {
            // Handle API request failure
            FNotificationInfo ErrorInfo(LOCTEXT("LoginError", "Login failed!"));
            ErrorInfo.bFireAndForget = true;
            ErrorInfo.FadeOutDuration = 2.0f;
            ErrorInfo.bUseLargeFont = false;
            FSlateNotificationManager::Get().AddNotification(ErrorInfo);
        }
    }
    else
    {
        // Handle API request failure
        FNotificationInfo ErrorInfo(LOCTEXT("LoginError", "Login failed!"));
        ErrorInfo.bFireAndForget = true;
        ErrorInfo.FadeOutDuration = 2.0f;
        ErrorInfo.bUseLargeFont = false;
        FSlateNotificationManager::Get().AddNotification(ErrorInfo);
    }

    // Release the HttpRequest object
    HttpRequest.Reset();
}

// Inside SFlippitWidget class
void SFlippitWidget::ExtractTokens(const FString& ResponseContent)
{
    TSharedPtr<FJsonObject> JsonObject;
    TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(ResponseContent);

    if (FJsonSerializer::Deserialize(Reader, JsonObject))
    {
        FString ExtractedAccessToken, ExtractedRefreshToken, ExtractedIDToken;
        if (JsonObject->TryGetStringField(TEXT("access_token"), ExtractedAccessToken) &&
            JsonObject->TryGetStringField(TEXT("refresh_token"), ExtractedRefreshToken) &&
            JsonObject->TryGetStringField(TEXT("id_token"), ExtractedIDToken))
        {
            IdToken = ExtractedIDToken;
            AccessToken = ExtractedAccessToken;
            RefreshToken = ExtractedRefreshToken;
        }
    }
    else
    {
        // Handle JSON parsing failure
    }
}
void SFlippitWidget::FetchAndStoreAPIKeys()
{
    // Make the first API call to get the Flippit authorizer (access_key)
    FString IntegrationTokenUrl = TEXT("https://studio-api.flippit.ai/api/v1/integrations/get_integration_token");

    TSharedRef<IHttpRequest> IntegrationTokenRequest = FHttpModule::Get().CreateRequest();
    IntegrationTokenRequest->SetURL(IntegrationTokenUrl);
    IntegrationTokenRequest->SetVerb(TEXT("GET"));
    IntegrationTokenRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    FString AccessTokenHeader = FString::Printf(TEXT("Bearer %s"), *AccessToken);
    FString RefreshTokenHeader = FString::Printf(TEXT("Bearer %s"), *RefreshToken);

    IntegrationTokenRequest->SetHeader(TEXT("X-FLIPPIT-ACCESS-TOKEN"), AccessTokenHeader);
    IntegrationTokenRequest->SetHeader(TEXT("X-FLIPPIT-REFRESH-TOKEN"), RefreshTokenHeader);
    IntegrationTokenRequest->OnProcessRequestComplete().BindLambda([this](FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bWasSuccessful) {
        if (bWasSuccessful && HttpResponse.IsValid() && HttpResponse->GetResponseCode() == 200) {
            FString IntegrationTokenResponse = HttpResponse->GetContentAsString();

            // Log the response for debugging purposes

            TSharedPtr<FJsonObject> JsonObject;
            TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(IntegrationTokenResponse);
            if (FJsonSerializer::Deserialize(Reader, JsonObject))
            {
                // Check if "integration" object exists
                if (JsonObject->HasField(TEXT("integration")))
                {
                    // Access the "integration" object
                    const TSharedPtr<FJsonObject>& IntegrationObject = JsonObject->GetObjectField(TEXT("integration"));

                    FString FlippitApiKey;

                    // Try to extract "access_key" from the "integration" object
                    if (IntegrationObject->TryGetStringField(TEXT("access_key"), FlippitApiKey))
                    {
                        // Log the Flippit API key for debugging purposes

                        // Store the Flippit API key in a local variable
                         AccessKey = FlippitApiKey;

                        // Make the second API call to get additional credentials
                        FString SystemCredsUrl = TEXT("https://studio-api.flippit.ai/api/v1/unity/creds");

                        TSharedRef<IHttpRequest> SystemCredsRequest = FHttpModule::Get().CreateRequest();
                        SystemCredsRequest->SetURL(SystemCredsUrl);
                        SystemCredsRequest->SetVerb(TEXT("GET"));
                        SystemCredsRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
                        FString AccessTokenHeader2 = FString::Printf(TEXT("Bearer %s"), *AccessToken);
                        FString RefreshTokenHeader2 = FString::Printf(TEXT("Bearer %s"), *RefreshToken);

                        SystemCredsRequest->SetHeader(TEXT("X-FLIPPIT-ACCESS-TOKEN"), AccessTokenHeader2);
                        SystemCredsRequest->SetHeader(TEXT("X-FLIPPIT-REFRESH-TOKEN"), RefreshTokenHeader2);

                        SystemCredsRequest->OnProcessRequestComplete().BindLambda([this, FlippitApiKey](FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bWasSuccessful) {
                            if (bWasSuccessful && HttpResponse.IsValid() && HttpResponse->GetResponseCode() == 200) {
                                FString SystemCredsResponse = HttpResponse->GetContentAsString();

                                // Log the response for debugging purposes

                                TSharedPtr<FJsonObject> SystemCredsObject;
                                TSharedRef<TJsonReader<TCHAR>> JsonReader2 = TJsonReaderFactory<TCHAR>::Create(SystemCredsResponse);

                                if (FJsonSerializer::Deserialize(JsonReader2, SystemCredsObject))
                                {
                                    FString OpenAiApiKey, AWSApiKey, AWSSecret;

                                    // Check if the fields exist before extracting them
                                    if (SystemCredsObject->HasField(TEXT("open_ai")) &&
                                        SystemCredsObject->HasField(TEXT("aws_access_key")) &&
                                        SystemCredsObject->HasField(TEXT("aws_secret")))
                                    {
                                        SystemCredsObject->TryGetStringField(TEXT("open_ai"), OpenAiApiKey);
                                        SystemCredsObject->TryGetStringField(TEXT("aws_access_key"), AWSApiKey);
                                        SystemCredsObject->TryGetStringField(TEXT("aws_secret"), AWSSecret);

                                        // Log the extracted credentials for debugging purposes

                                        // Store the credentials in local variables
                                        OpenAIKey = OpenAiApiKey;
                                         AWSKey = AWSApiKey;
                                         AWSSecretKey = AWSSecret;

                                        // Now you can use the stored credentials as needed
                                    }
                                    else {
                                        // Handle missing fields in the second API response
                                    }
                                }
                                else {
                                    // Handle JSON parsing failure in the second API response
                                }
                            }
                            else {
                                // Handle the second API call failure
                            }
                            });

                        // Execute the second API request
                        SystemCredsRequest->ProcessRequest();
                    }
                    else {
                        // Handle missing 'access_key' field in the first API response
                    }
                }
                else {
                    // Handle missing 'integration' field in the first API response
                }
            }
            else {
                // Handle JSON parsing failure in the first API response
            }
        }
        else {
            // Handle the first API call failure
        }
        });

    // Execute the first API request
    IntegrationTokenRequest->ProcessRequest();
}



void SFlippitWidget::UseCharacterData()
{
    // Construct the API URL for characters
    FString Url = TEXT("https://studio-api.flippit.ai/api/v1/characters/");

    // Create a request object
    HttpRequest = FHttpModule::Get().CreateRequest();
    HttpRequest->SetURL(Url);
    HttpRequest->SetVerb(TEXT("GET"));

    FString AccessTokenHeader = FString::Printf(TEXT("Bearer %s"), *AccessToken);
    FString RefreshTokenHeader = FString::Printf(TEXT("Bearer %s"), *RefreshToken);
    HttpRequest->SetHeader(TEXT("X-FLIPPIT-ACCESS-TOKEN"), AccessTokenHeader);
    HttpRequest->SetHeader(TEXT("X-FLIPPIT-REFRESH-TOKEN"), RefreshTokenHeader);


    // Set up a response handler
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &SFlippitWidget::OnCharacterRequestComplete);

    // Execute the request
    HttpRequest->ProcessRequest();
}

void SFlippitWidget::OnCharacterRequestComplete(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
    if (Response.IsValid())
    {
        FString ResponseContent = Response->GetContentAsString();
        CharacterContent = ResponseContent;
        TArray<FCharacter> ParsedCharacters;

        if (ParseCharactersResponse(ResponseContent, ParsedCharacters))
        {
            // Replace the content of the ChildSlot with the character UI
            CharacterUI(ParsedCharacters);
        }
        else
        {
            FNotificationInfo ErrorInfo(LOCTEXT("CharactersError", "Failed to fetch characters!"));
            ErrorInfo.bFireAndForget = true;
            ErrorInfo.FadeOutDuration = 2.0f;
            ErrorInfo.bUseLargeFont = false;
            FSlateNotificationManager::Get().AddNotification(ErrorInfo);
        }
    }
    else
    {
        FNotificationInfo ErrorInfo(LOCTEXT("CharactersError", "Failed to fetch characters!"));
        ErrorInfo.bFireAndForget = true;
        ErrorInfo.FadeOutDuration = 2.0f;
        ErrorInfo.bUseLargeFont = false;
        FSlateNotificationManager::Get().AddNotification(ErrorInfo);
    }

    HttpRequest.Reset();
}

bool SFlippitWidget::ParseCharactersResponse(const FString& ResponseContent, TArray<FCharacter>& OutCharacters)
{
    OutCharacters.Empty();

    TArray<TSharedPtr<FJsonValue>> JsonArray;
    TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(ResponseContent);

    if (FJsonSerializer::Deserialize(Reader, JsonArray))
    {
        for (const TSharedPtr<FJsonValue>& CharacterValue : JsonArray)
        {
            const TSharedPtr<FJsonObject>& CharacterObject = CharacterValue->AsObject();
            if (CharacterObject.IsValid())
            {
                const TSharedPtr<FJsonObject>& CharacterData = CharacterObject->GetObjectField(TEXT("character"));
                if (CharacterData.IsValid())
                {
                    FCharacter Character;

                    Character.CharacterId = CharacterData->GetStringField(TEXT("character_id"));
                    Character.Name = CharacterData->GetStringField(TEXT("name"));
                    Character.glbURL = CharacterData->GetStringField(TEXT("asset_file_path"));
                    // Parse other properties as needed

                    OutCharacters.Add(Character);
                }
            }
        }

        parsed = true; // Set parsed flag to true when characters are successfully parsed

        // Characters parsed successfully
        return true;
    }
    else
    {
        // Handle JSON parsing failure
        FString ErrorMessage = FString::Printf(TEXT("ParseCharactersResponse: JSON parsing failed. Error: %s"), *Reader->GetErrorMessage());
    }

    parsed = false; // Set parsed flag to false in case of parsing failure
    return false;
}


// ...

void SFlippitWidget::CharacterUI(const TArray<FCharacter>& InCharacters)
{
    TSharedPtr<SVerticalBox> CharacterButtons;
    SAssignNew(CharacterButtons, SVerticalBox);
    const FSlateBrush* ImageBrush = FFlippitEditorStyle::Get().GetBrush("FlippitEditor.OpenPluginWindow");

    for (const FCharacter& Character : InCharacters)
    {
        FString ButtonText = FString::Printf(TEXT("%s"), *Character.Name);
        CharacterButtons->AddSlot()
            .AutoHeight()
            [
                SNew(SButton)
                .Text(FText::FromString(ButtonText))
            .ButtonColorAndOpacity(FLinearColor(1.0f, 0.8f, 0.0f))
            .OnClicked_Lambda([this, Character]() {
            return HandleCharacterButtonClicked(Character); // Pass the selected character to the handler
                })
            ];
    }

    // Replace the content of the ChildSlot with the character buttons UI
    ChildSlot
        [   SNew(SOverlay)

            +SOverlay::Slot()
            .HAlign(HAlign_Center)
        .VAlign(VAlign_Center)
        [  SNew(SVerticalBox)
       
        + SVerticalBox::Slot()
        .AutoHeight()
        .Padding(FMargin(0.0f, 0.0f, 0.0f, 20.0f)) // Add a small margin at the bottom
        [
            // Display the image
            SNew(SBox)
            .WidthOverride(200.0f) // Set the width of the image
        .HeightOverride(200.0f) // Set the height of the image
        [
            SNew(SImage)
            .Image(ImageBrush)
        ]
        ]
        + SVerticalBox::Slot()
        .AutoHeight()
        .Padding(FMargin(0.0f, 0.0f, 0.0f, 20.0f))
        [
            SNew(STextBlock)
            .Text(LOCTEXT("WelcomeText", "List of Avatars"))
        .Font(FSlateFontInfo(FPaths::EngineContentDir() / TEXT("Slate/Fonts/Roboto-Bold.ttf"), 24))
        ]

    + SVerticalBox::Slot()
        .AutoHeight()
        .Padding(FMargin(0.0f, 0.0f, 0.0f, 20.0f))
        [
            CharacterButtons.ToSharedRef()

        ]
        
        ]
        
    ];



}


FReply SFlippitWidget::HandleCharacterButtonClicked(const FCharacter& ClickedCharacter)
{
    const FSlateBrush* ImageBrush = FFlippitEditorStyle::Get().GetBrush("FlippitEditor.OpenPluginWindow");

    FString ButtonText = "Load New Rig";
    FString ButtonText2 = "Existing Rig";

    FString ReturnButtonText = "Return to Character Selection"; // Text for the return button

    ChildSlot
        [SNew(SOverlay)

        + SOverlay::Slot()
        .HAlign(HAlign_Center)
        .VAlign(VAlign_Center)
        [
            SNew(SVerticalBox)
            + SVerticalBox::Slot()
        .AutoHeight()
        .Padding(FMargin(0.0f, 0.0f, 0.0f, 20.0f)) // Add a small margin at the bottom
        [
            // Display the image
            SNew(SBox)
            .WidthOverride(200.0f) // Set the width of the image
        .HeightOverride(200.0f) // Set the height of the image
        [
            SNew(SImage)
            .Image(ImageBrush)
        ]
        ]
            + SVerticalBox::Slot()
                .AutoHeight()
                .Padding(FMargin(0.0f, 0.0f, 0.0f, 20.0f))
        [
            SNew(STextBlock)
            .Text(LOCTEXT("WelcomeText", "Choose your option"))
        .Font(FSlateFontInfo(FPaths::EngineContentDir() / TEXT("Slate/Fonts/Roboto-Bold.ttf"), 24))
        ]

    + SVerticalBox::Slot()
        .AutoHeight()
        .Padding(FMargin(0.0f, 0.0f, 0.0f, 20.0f))
        [ SNew(SHorizontalBox)
        + SHorizontalBox::Slot()
        .HAlign(HAlign_Center)
        .VAlign(VAlign_Center)
        [
            SNew(SButton)
            .Text(FText::FromString(ButtonText))
        .ButtonColorAndOpacity(FLinearColor(1.0f, 0.8f, 0.0f))
        .OnClicked_Lambda([this, ClickedCharacter]() {
        return LoadAvatarNewRig(ClickedCharacter);
            })
        ]
        ]

    + SVerticalBox::Slot()
        .AutoHeight()
        .Padding(FMargin(0.0f, 0.0f, 0.0f, 20.0f))
        [
            SNew(SHorizontalBox)
            + SHorizontalBox::Slot()
        .HAlign(HAlign_Center)
        .VAlign(VAlign_Center)
        [
            SNew(SBox)
            .WidthOverride(100.0f) // Set the fixed width here
        [
            SAssignNew(TagInput, SEditableTextBox)
            .HintText(LOCTEXT("TagHint", "Put you character tag Here"))
        ]
        ]

    + SHorizontalBox::Slot()
        .HAlign(HAlign_Left)
        .VAlign(VAlign_Center)
        [
            SNew(SButton)
            .Text(FText::FromString(ButtonText2))
        .ButtonColorAndOpacity(FLinearColor(1.0f, 0.8f, 0.0f))
        .OnClicked_Lambda([this, ClickedCharacter]() {
        return LoadExistingRig(ClickedCharacter);
            })
        ]
        ]
        ]
        ];


    return FReply::Handled();
}






FReply SFlippitWidget::LoadAvatarNewRig(const FCharacter& ClickedCharacter) {

    URLpublic = FString();



    URLpublic = ClickedCharacter.glbURL;
    IDpublic = ClickedCharacter.CharacterId;
    NameCharacter = ClickedCharacter.Name;
    FName MyFlippitActorTag = TEXT("MyFlippitActorTag"); // Find the actor with the specified tag 


    SpawnFlippitActor();

    MyFlippitActor->glbURL = URLpublic;
    MyFlippitActor->characterId = IDpublic;
    MyFlippitActor->characterName = NameCharacter;
    MyFlippitActor->ApiKey = AccessKey;
    MyFlippitActor->OpenAIKey = OpenAIKey;
    MyFlippitActor->AWSKey = AWSKey;
    MyFlippitActor->AWSSecretKey = AWSSecretKey;

    if (MyFlippitActor)
    {
        if (!URLpublic.IsEmpty())
        {
            UFunction* func = MyFlippitActor->FindFunction(FName(TEXT("Reload Skin")));
            if (func)
            {
                MyFlippitActor->ProcessEvent(func, (void*)nullptr);
            }
            else {
            }
        }
    }
    else
    {
    }
  
        TArray<FCharacter> ParsedCharacters;

        if (ParseCharactersResponse(CharacterContent, ParsedCharacters))
        {
            CharacterUI(ParsedCharacters);

       }
    

    return FReply::Handled();
}
void SFlippitWidget::SpawnFlippitActor()
{
    FName MyFlippitActorTag = TEXT("MyFlippitActorTag");
    FFlippitEditorModule inst;
    FString BlueprintReferencePath = TEXT("/Script/Engine.Blueprint'/Flippit/Blueprints/FlippitAgent.FlippitAgent'");
    UBlueprint* BPObject = LoadObject<UBlueprint>(nullptr, *BlueprintReferencePath);

    if (BPObject)
    {
        BPClass = BPObject->GeneratedClass;
        if (BPClass)
        {
        }
    }
    else
    {
    }

    if (BPClass)
    {
        FVector SpawnLocation = FVector(550.0f, 770.0f, 90.0f);; // Set the spawn location
        FRotator SpawnRotation = FRotator::ZeroRotator; // Set the spawn rotation
        FActorSpawnParameters SpawnParams;
        AFlippitCharacter* SpawnedActor = GWorld->SpawnActor<AFlippitCharacter>(BPClass, SpawnLocation, SpawnRotation, SpawnParams);

        if (SpawnedActor)
        {
            SetFlippitActorReference(SpawnedActor);
            SpawnedActor->Tags.Add(MyFlippitActorTag);
            SpawnedActor->SetActorLabel(NameCharacter);

            FNotificationInfo SuccessInfo(LOCTEXT("New avatar is in the scene ", "New avatar is in the scene "));
            SuccessInfo.FadeOutDuration = 2.0f;
            SuccessInfo.bUseLargeFont = false;
            FSlateNotificationManager::Get().AddNotification(SuccessInfo);

        }
    }
    else
    {
    }
}

void SFlippitWidget::SetFlippitActorReference(AFlippitCharacter* ActorReference)
{
    MyFlippitActor = ActorReference;
}


FReply SFlippitWidget::LoadExistingRig(const FCharacter& ClickedCharacter)
{
    TArray<AActor*> FoundActors;
    FString TagToSearch = TagInput->GetText().ToString();
    FString BlueprintReferencePath = TEXT("/Script/Engine.Blueprint'/Flippit/Blueprints/FlippitBehavior.FlippitBehavior'");

    UGameplayStatics::GetAllActorsWithTag(GWorld, FName(*TagToSearch), FoundActors);

    if (FoundActors.Num() > 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("Characters with tag %s found:"), *TagToSearch);
        Wrong = false;
        // Load the blueprint class
        UBlueprint* BPObject = LoadObject<UBlueprint>(nullptr, *BlueprintReferencePath);

        if (BPObject)
        {
            BPClass = BPObject->GeneratedClass;

            // Iterate through the found actors and set their behavior
            for (AActor* Actor : FoundActors)
            {
                // Check if the actor is valid and if it is not already of the Blueprint class
                if (Actor && !Actor->IsA(BPClass))
                {
                    // Save the skeletal mesh of the existing actor
                    USkeletalMeshComponent* ExistingSkeletalMesh = Actor->FindComponentByClass<USkeletalMeshComponent>();

                    if (ExistingSkeletalMesh)
                    {
                        // Destroy the existing actor
                        Actor->Destroy();

                        // Create a new actor instance from the Blueprint class
                        AActor* NewActor = GWorld->SpawnActor<AActor>(BPClass);

                        if (NewActor)
                        {
                            // Set the transform of the new actor to match the old one (optional)
                            NewActor->SetActorTransform(Actor->GetActorTransform());

                            // Set the saved skeletal mesh to the new actor
                            USkeletalMeshComponent* NewSkeletalMesh = NewActor->FindComponentByClass<USkeletalMeshComponent>();

                            if (NewSkeletalMesh)
                            {
                                NewSkeletalMesh->SetSkeletalMeshAsset(ExistingSkeletalMesh->GetSkeletalMeshAsset());

                                

                            }

                            AFlippitCharacter* FlippitCharacter = Cast<AFlippitCharacter>(NewActor);
                            if (FlippitCharacter)
                            {
                                FlippitCharacter->glbURL = ClickedCharacter.glbURL;
                                FlippitCharacter->characterId = ClickedCharacter.CharacterId;
                                FlippitCharacter->characterName = ClickedCharacter.Name;
                                FlippitCharacter->ApiKey = AccessKey;
                                FlippitCharacter->OpenAIKey = OpenAIKey;
                                FlippitCharacter->AWSKey = AWSKey;
                                FlippitCharacter->AWSSecretKey = AWSSecretKey;

                                NewActor->SetActorLabel(ClickedCharacter.Name);

                                FNotificationInfo SuccessInfo(LOCTEXT("Your Rig is Possesed now 3:)", "Your Rig is Possesed now 3:) "));
                                SuccessInfo.FadeOutDuration = 2.0f;
                                SuccessInfo.bUseLargeFont = false;
                                FSlateNotificationManager::Get().AddNotification(SuccessInfo);

                            }

                        }
                    }
                }
            }
        }
        else
        {
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("No Character found with tag %s."), *TagToSearch);
        Wrong = true;
        FNotificationInfo ErrorInfo(LOCTEXT(" You have no Character with that specific tag ", " You have no Character with that specific tag"));
        ErrorInfo.bFireAndForget = true;
        ErrorInfo.FadeOutDuration = 2.0f;
        ErrorInfo.bUseLargeFont = false;
        FSlateNotificationManager::Get().AddNotification(ErrorInfo);

    }
    TArray<FCharacter> ParsedCharacters;

    if (ParseCharactersResponse(CharacterContent, ParsedCharacters)&&!Wrong)
    {
        CharacterUI(ParsedCharacters);

    }

    return FReply::Handled();
}





IMPLEMENT_MODULE(FFlippitEditorModule, FlippitEditor)

#undef LOCTEXT_NAMESPACE

