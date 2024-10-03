#ifndef MOTION_DATA_H
#define MOTION_DATA_H

#include <vector>
#include <string>

// Bone: Represents a single bone in the skeleton
struct Bone {
    std::string name;       // Name of the bone
    Vector3 position;       // Position of the bone
    Quaternion rotation;    // Rotation of the bone
};

// MotionData: Represents the data captured from motion capture systems
struct MotionData {
    std::vector<Vector3> bonePositions;  // Positions of the bones
    std::vector<Quaternion> boneRotations;  // Rotations of the bones

    // Initialize with the number of bones
    MotionData(size_t numBones) {
        bonePositions.resize(numBones);
        boneRotations.resize(numBones);
    }
};

#endif // MOTION_DATA_H
