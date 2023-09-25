// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "Http.h"
#include "Widgets/DeclarativeSyntaxSupport.h"
#include "Widgets/SCompoundWidget.h"
#include "Widgets/Text/STextBlock.h"
#include "Widgets/Input/SEditableTextBox.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Notifications/SNotificationList.h"
#include "Framework/Notifications/NotificationManager.h"
#include "UObject/NoExportTypes.h"
#include <FlippitCharacter.h>
#include "Modules/ModuleManager.h" // Include the correct header for ModuleManager
#include "SlateBasics.h" // Include SlateBasics for FSlateImageBrush
#include "Styling/SlateBrush.h"

class FToolBarBuilder;
class FMenuBuilder;
   
    struct FCharacter
    {
        FString Name;
        FString CharacterId;
        FString FirstName;
        FString SecondName;
        FString glbURL;


    };

    class FFlippitEditorModule : public IModuleInterface
    {
    public:

        /** IModuleInterface implementation */
        virtual void StartupModule() override;
        virtual void ShutdownModule() override;


        /** This function will be bound to Command (by default it will bring up plugin window) */
        void PluginButtonClicked();

    private:

        void RegisterMenus();


        TSharedRef<class SDockTab> OnSpawnPluginTab(const class FSpawnTabArgs& SpawnTabArgs);

    private:
        TSharedPtr<class FUICommandList> PluginCommands;

    private:
        FName FlippitTabName;
        TSharedPtr<class SEditableTextBox> UsernameInput;
        TSharedPtr<class SEditableTextBox> PasswordInput;
        TSharedPtr<class SNotificationItem> NotificationItem;
        FHttpRequestPtr HttpRequest;
    };

    class FCharacterInfo;

    class SFlippitWidget : public SCompoundWidget 

    {
    public:
        SLATE_BEGIN_ARGS(SFlippitWidget) {}
        SLATE_END_ARGS()

            FReply LoadAvatarNewRig(const FCharacter& ClickedCharacter);
        FString OpenAIKey ;
        FString AWSKey ;
        FString AWSSecretKey;
        FString AccessKey ;

         void Construct(const FArguments& InArgs);
        TArray<FCharacter> Characters; // This array will store the character data
        FString URLpublic;
        FString IDpublic;
        FString NameCharacter;
        AFlippitCharacter* MyFlippitActor;
        void SetFlippitActorReference(AFlippitCharacter* ActorReference);
        void SpawnFlippitActor();
        void OnMouseClick(FVector2D MousePosition);
        TSubclassOf<AFlippitCharacter> BPClass; // Store the Blueprint class here
        TSharedRef<SWidget> CreateCircularImage(const FSlateBrush* ImageBrush, FVector2D ImageSize);

        FReply LoadExistingRig(const FCharacter& ClickedCharacter   );

        TSharedPtr<class SEditableTextBox> TagInput;

        
    private:



    private:
        FReply HandleLoginButtonClicked();
        FReply HandleCharacterButtonClicked(const FCharacter& ClickedCharacter);
        void PerformLogin();
        void OnLoginRequestComplete(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
        void ExtractTokens(const FString& ResponseContent);
        void UseCharacterData();
        void OnCharacterRequestComplete(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
        void CharacterUI(const TArray<FCharacter>& Characters);
        bool  ParseCharactersResponse(const FString& ResponseContent, TArray<FCharacter>& OutCharacter);
        void BackCharacterUI(const TArray<FCharacter>& InCharacters);
        void FetchAndStoreAPIKeys();
    

    private:
        TSharedPtr<class SEditableTextBox> UsernameInput;
        TSharedPtr<class SEditableTextBox> PasswordInput;
        TSharedPtr<class SNotificationItem> NotificationItem;
        FHttpRequestPtr HttpRequest;
        FString AccessToken;
        FString IdToken;
        FString RefreshToken;
        FString CharacterContent;
        bool bLoggedIn; // Flag to track login status
        bool parsed;
        bool back;
        bool Wrong;
        // Declare the TArray to store character data
        TArray<FCharacter> WidgetCharacters; // This array will store the character data

   

    };



#undef LOCTEXT_NAMESPACE

