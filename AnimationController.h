#ifndef ANIMATION_CONTROLLER_H
#define ANIMATION_CONTROLLER_H

#include <string>
#include "Skeleton.h"
#include "FacialRig.h"

// AnimationController: Handles animations for the avatar, blending with motion data
class AnimationController {
private:
    std::string animationDataPath;  // Path to the animation data file
    Animation currentAnimation;     // Current animation being played

public:
    AnimationController(const std::string& animationDataPath);

    // Load animation data from the provided path
    void LoadAnimationData(const std::string& animationDataPath);

    // Update animations based on time and blend with motion data
    void Update(Skeleton& skeleton, FacialRig& facialRig, float deltaTime);

    // Blend the current animation with real-time motion data
    void BlendWithMotionData(const MotionData& motionData);
};

#endif // ANIMATION_CONTROLLER_H
