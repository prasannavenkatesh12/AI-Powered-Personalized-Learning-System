# Android Module

This module handles the native Android interface where the camera feed is captured and sent to the OpenCV layer for processing.

## Key Features
- Real-time camera preview using CameraX.
- Frame data passed to OpenCV through JNI for processing.
- Results (student emotion/attention metrics) shown on screen.
- Communication with backend API (for analytics and recommendations).

## Tech Stack
- Language: Java/Kotlin
- Native Interface: JNI
- Dependency: OpenCV Android SDK

## How it Works
1. The Android app captures video frames.
2. Each frame is converted to a suitable format (e.g., `Mat`).
3. The frame is processed in native C++ (OpenCV).
4. The processed result (e.g., emotion label) is sent back to the UI.

