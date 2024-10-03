#ifndef VOICE_DATA_H
#define VOICE_DATA_H

#include <vector>
#include <string>

// Phoneme: Represents a phoneme and its intensity for lip sync
struct Phoneme {
    std::string name;     // Name of the phoneme
    float intensity;      // Intensity of the phoneme (0.0 to 1.0)
};

// VoiceData: Represents the data used for syncing voice with facial animations
struct VoiceData {
    std::vector<Phoneme> phonemes;  // List of phonemes and their intensities
};

#endif // VOICE_DATA_H
