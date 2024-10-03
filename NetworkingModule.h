#ifndef NETWORKING_MODULE_H
#define NETWORKING_MODULE_H

#include "VideoStream.h"
#include "AudioStream.h"

// NetworkingModule: Manages the transmission of video and audio streams
class NetworkingModule {
private:
    VideoStream videoStream;                // Handles video stream output
    AudioStream audioStream;                // Handles audio stream output

public:
    NetworkingModule();

    // Initialize networking protocols and connections
    void InitializeNetworking();

    // Transmit a video frame to the external platform
    void TransmitVideo(VideoFrame frame);

    // Transmit audio data to the external platform
    void TransmitAudio(AudioData audio);

    // Ensure synchronization with external platforms (e.g., Zoom, Teams)
    void SyncWithExternalPlatform();
};

#endif // NETWORKING_MODULE_H
