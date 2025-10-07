
“AI-powered system that recommends personalized learning materials based on student performance.”
# AI-Powered Personalized Learning System

An AI-powered system that recommends personalized learning materials based on student performance and attention analysis.

---

## 👩‍💻 Overview
This project integrates Android, OpenCV (C++), and Web components to analyze student behavior using computer vision and provide adaptive learning recommendations.

---

## ⚙️ Features
- Real-time camera processing via Android + OpenCV
- Face detection and emotion recognition
- Student attention analysis (eye movement, posture)
- Performance analytics dashboard (Web)
- Personalized content recommendations

---

## 🧠 Architecture

- **Android App:** Captures frames and sends to native C++.
- **OpenCV Module:** Processes data (face/emotion/attention).
- **Web Interface:** Displays results and analytics.

---

## 🧰 Tech Stack
| Component | Technology |
|------------|-------------|
| Android | Java / Kotlin + CameraX |
| Native Layer | C++ (OpenCV, JNI) |
| Web | TypeScript / React / Chart.js |
| Backend | Flask / Node.js (optional) |

---

## 🔧 Setup Instructions

### 1. Android
- Install **Android Studio**
- Setup **OpenCV Android SDK**
- Enable NDK in your Android project

### 2. OpenCV
- Use `jniLibs` folder to store native C++ libs
- Example CMake integration:
```cmake
find_package(OpenCV REQUIRED)
target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS})
### 3. Web

Install dependencies:

npm install
npm run dev


