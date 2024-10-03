#ifndef SKELETON_H
#define SKELETON_H

#include <string>
#include <vector>
#include "MotionData.h"

// Skeleton: Manages the bone structure of the avatar for body movement
class Skeleton {
private:
    std::string skeletonPath;             // Path to the skeleton data file
    std::vector<Bone> bones;              // List of bones in the skeleton

public:
    Skeleton(const std::string& skeletonPath);

    // Load the skeleton structure from the provided path
    void LoadSkeleton(const std::string& skeletonPath);

    // Apply motion data to the skeleton
    void ApplyMotionData(const MotionData& motionData);

    // Render the skeleton (this would be integrated with the rendering pipeline)
    void Render();
};

#endif // SKELETON_H
