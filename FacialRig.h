#ifndef FACIAL_RIG_H
#define FACIAL_RIG_H

#include <string>
#include <vector>
#include "VoiceData.h"

// FacialRig: Controls facial expressions and lip sync
class FacialRig {
private:
    std::string facialRigPath;            // Path to the facial rig data file
    std::vector<FacialControl> controls;  // List of facial controls (e.g., blendshapes, bones)

public:
    FacialRig(const std::string& facialRigPath);

    // Load the facial rig structure from the provided path
    void LoadFacialRig(const std::string& facialRigPath);

    // Apply voice data to the facial rig (for lip sync and expressions)
    void ApplyVoiceData(const VoiceData& voiceData);

    // Render the facial rig (integrated with the avatar's rendering)
    void Render();
};

#endif // FACIAL_RIG_H
