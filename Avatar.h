#ifndef AVATAR_H
#define AVATAR_H

#include <string>
#include "Skeleton.h"
#include "FacialRig.h"
#include "AnimationController.h"
#include "MotionData.h"
#include "VoiceData.h"

// Avatar: Represents the 3D avatar, including model, skeleton, and animations
class Avatar {
private:
    std::string modelPath;                // Path to the 3D model file
    Skeleton skeleton;                    // Manages the avatar's skeleton for body movement
    FacialRig facialRig;                  // Controls facial expressions and lip sync
    AnimationController animationController;  // Handles animations for the avatar

public:
    Avatar(const std::string& modelPath);

    // Load the 3D model and associated rigs (skeleton, facial rig)
    void LoadModel(const std::string& modelPath);

    // Update animations based on time and input data
    void UpdateAnimation(float deltaTime);

    // Apply motion data to the avatar's skeleton (from motion capture)
    void ApplyMotionData(const MotionData& motionData);

    // Synchronize facial rig with voice data (for lip sync)
    void SyncWithVoice(const VoiceData& voiceData);

    // Render the avatar in the current environment
    void Render();
};

#endif // AVATAR_H

