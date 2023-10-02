# Flippit SDK - Unreal - Installation steps

Please visit our [Online Documentation](https://www.notion.so/flippitai/Unreal-SDK-WIP-c44d9ddbbeb94a72b15be3e174e49c1a) for more details about the SDK capabilities.


## Dependencies

- Ready Player Me Unreal SDK: This is an open-source Unreal Engine plugin that contains all the core functionality required for loading and displaying avatars. The plugin can be found on their [GitHub](https://github.com/readyplayerme/rpm-unreal-sdk/)
- RuntimeAudioImporter: This plugin imports audio of various formats at runtime. It can be found on this [GitHub](https://github.com/gtreshchev/RuntimeAudioImporter/) or on the Unreal Marketplace
     
- OpenAI Api Unreal: This plugin is used to enable Speech-to-Text within your game. The plugin can be found on this [GitHub](https://github.com/KellanM/OpenAI-Api-Unreal) or on the Unreal Marketplace
     
## Installation
To get started with the Flippit Unreal SDK, got to your project repository and run the following command:
```bash
git clone https://github.com/FlippitAI/unreal-sdk.git Plugins/Flippit;git clone https://github.com/gtreshchev/RuntimeAudioImporter.git Plugins/RuntimeAudioImporter;git clone https://github.com/KellanM/OpenAI-Api-Unreal.git Plugins/OpenAIAPI;git clone https://github.com/readyplayerme/rpm-unreal-sdk.git Plugins/ReadyPlayerMe;git clone https://github.com/rdeioris/glTFRuntime.git Plugins/glTFRuntime;
```
This will install all the dependencies required by Flippit.

Then Generate Visual Studio Files: 

Go  to your project folder and find the Unreal Engine project file (with the name of your project). 
Right-click on this file and look for an option called "Generate Visual Studio Files." Click on it and wait for the process to complete. 

Open your Project a window will appear for build accept the process and wait 
when the installation is completed the project will open automaticly
## Requirements
- Unreal Engine Version: 5.2 +
