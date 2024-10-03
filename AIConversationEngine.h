#ifndef AI_CONVERSATION_ENGINE_H
#define AI_CONVERSATION_ENGINE_H

#include <string>
#include "VoiceSynthesisEngine.h"

// AIConversationEngine: Manages communication with OpenAI API for conversation
class AIConversationEngine {
private:
    std::string apiKey;                    // API key for OpenAI
    std::string currentPrompt;             // Stores the ongoing conversation context
    VoiceSynthesisEngine* voiceEngine;     // Pointer to the voice synthesis engine

public:
    AIConversationEngine(const std::string& apiKey, VoiceSynthesisEngine* voiceEngine);

    // Generate a response using OpenAI API based on user input
    std::string GenerateResponse(const std::string& userInput);

    // Convert the AI's response to speech and synchronize with the avatar
    void SpeakResponse(const std::string& responseText);

    // Update the context for the conversation (e.g., after receiving new input)
    void UpdatePromptContext(const std::string& newContext);

    // Set the voice synthesis engine for generating spoken responses
    void SetVoiceEngine(VoiceSynthesisEngine* engine);
};

#endif // AI_CONVERSATION_ENGINE_H
