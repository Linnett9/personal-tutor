#ifndef AVATAR_MANAGER_H
#define AVATAR_MANAGER_H

#include "Avatar.h"
#include "MotionCaptureSystem.h"
#include "VoiceSynthesisEngine.h"
#include "AIConversationEngine.h"
#include "EnvironmentManager.h"
#include "NetworkingModule.h"

// AvatarManager: Central controller for managing the avatar system
class AvatarManager {
private:
    Avatar avatar;                          // Handles the 3D model, animations, and expressions of the avatar
    MotionCaptureSystem motionCapture;      // Captures and processes real-time body and facial movements
    VoiceSynthesisEngine voiceEngine;       // Synthesizes speech and synchronizes with the avatar's lips
    AIConversationEngine aiEngine;          // Interacts with OpenAI API to generate and manage conversational responses
    EnvironmentManager environmentManager;  // Manages the virtual environment where the avatar is rendered
    NetworkingModule networking;            // Manages data flow to external platforms (e.g., video streaming)

public:
    AvatarManager(const std::string& apiKey);
    // Initialize all components (avatar, motion capture, voice engine, AI engine, environment, networking)
    void Initialize();

    // Update the avatar and environment based on real-time data
    void Update(float deltaTime);

    // Render the avatar and environment to the screen or video stream
    void Render();

    // Synchronize the avatar’s output with external platforms
    void SyncWithExternalPlatform();

    // Process user input (text or voice) to interact with the AI engine
    void ProcessUserInput(const std::string& userInput);

    // Load a new avatar model from file
    void LoadAvatarModel(const std::string& modelPath);

    // Set the voice model for the voice synthesis engine
    void SetVoiceModel(const std::string& voiceModelPath);

    // Change the virtual environment where the avatar operates
    void SetEnvironment(const std::string& environmentName);
};

#endif // AVATAR_MANAGER_H
