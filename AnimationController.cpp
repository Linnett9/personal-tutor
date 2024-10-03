#include "AnimationController.h"
#include <iostream>

// Constructor: Initializes the animation controller with the given path
AnimationController::AnimationController(const std::string& animationDataPath)
    : animationDataPath(animationDataPath) {
    LoadAnimationData(animationDataPath);
}

// Load animation data from the provided path
void AnimationController::LoadAnimationData(const std::string& animationDataPath) {
    this->animationDataPath = animationDataPath;

    // Placeholder for loading animation data
    // Example: currentAnimation = LoadAnimationFromFile(animationDataPath);

    std::cout << "Animation data loaded from: " << animationDataPath << std::endl;
}

// Update animations based on time and blend with motion data
void AnimationController::Update(Skeleton& skeleton, FacialRig& facialRig, float deltaTime) {
    // Update the current animation (advance frames, apply to skeleton)
    currentAnimation.Advance(deltaTime);
    skeleton.ApplyMotionData(currentAnimation.GetMotionData());
    facialRig.ApplyVoiceData(currentAnimation.GetVoiceData());

    std::cout << "AnimationController updated" << std::endl;
}

// Blend the current animation with real-time motion data
void AnimationController::BlendWithMotionData(const MotionData& motionData) {
    // Blend motion data with current animation to achieve smooth transitions
    currentAnimation.BlendWith(motionData);

    std::cout << "Animation blended with motion data" << std::endl;
}
