#include <jni.h>
#include <opencv2/opencv.hpp>

using namespace cv;

extern "C" {

JNIEXPORT void JNICALL
Java_com_example_ai_learning_CameraActivity_processFrame(JNIEnv *env, jobject obj, jlong matAddr) {
    Mat &frame = *(Mat *)matAddr;
    cvtColor(frame, frame, COLOR_RGBA2GRAY);
    // Example: Basic image processing (convert to grayscale)
}

}
