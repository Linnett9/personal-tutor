#include "Avatar.h"
#include <iostream>

// Constructor: Initializes the avatar with a given model path
Avatar::Avatar(const std::string& modelPath)
    : modelPath(modelPath) {
    LoadModel(modelPath);
}

// Load the 3D model and associated rigs (skeleton, facial rig)
void Avatar::LoadModel(const std::string& modelPath) {
    this->modelPath = modelPath;

    // Load the model file (this is a placeholder for actual loading logic)
    // Example: skeleton and facialRig might be loaded from the model file
    skeleton = Skeleton(modelPath + "_skeleton");
    facialRig = FacialRig(modelPath + "_facial_rig");
    animationController = AnimationController(modelPath + "_animations");

    std::cout << "Avatar model loaded from: " << modelPath << std::endl;
}

// Update animations based on time and input data
void Avatar::UpdateAnimation(float deltaTime) {
    // Update the animation controller, which drives the skeleton and facial rig
    animationController.Update(skeleton, facialRig, deltaTime);

    std::cout << "Avatar animations updated" << std::endl;
}

// Apply motion data to the avatar's skeleton (from motion capture)
void Avatar::ApplyMotionData(const MotionData& motionData) {
    // Apply the motion data to the skeleton (e.g., bone positions, rotations)
    skeleton.ApplyMotionData(motionData);

    // Optionally, blend with existing animations in the animation controller
    animationController.BlendWithMotionData(motionData);

    std::cout << "Motion data applied to avatar" << std::endl;
}

// Synchronize facial rig with voice data (for lip sync)
void Avatar::SyncWithVoice(const VoiceData& voiceData) {
    // Sync facial rig based on the voice data (e.g., phoneme recognition)
    facialRig.ApplyVoiceData(voiceData);

    std::cout << "Avatar facial rig synchronized with voice data" << std::endl;
}

// Render the avatar in the current environment
void Avatar::Render() {
    // Render the skeleton (this includes the entire body)
    skeleton.Render();

    // Render the facial rig (handles facial expressions and lip sync)
    facialRig.Render();

    std::cout << "Avatar rendered" << std::endl;
}
