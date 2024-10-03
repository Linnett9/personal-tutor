#ifndef MOTION_CAPTURE_SYSTEM_H
#define MOTION_CAPTURE_SYSTEM_H

#include "MotionCaptureDevice.h"
#include "FacialRecognitionSystem.h"

// MotionCaptureSystem: Captures and processes motion and facial data
class MotionCaptureSystem {
private:
    MotionCaptureDevice device;             // Handles body motion capture
    FacialRecognitionSystem facialRecognition;  // Handles facial expression capture

public:
    MotionCaptureSystem();

    // Capture and return the current body motion data
    MotionData CaptureBodyMotion();

    // Capture and return the current facial expression data
    FacialData CaptureFacialExpressions();

    // Apply captured motion and facial data to the avatar
    void SyncWithAvatar(Avatar& avatar);
};

#endif // MOTION_CAPTURE_SYSTEM_H
