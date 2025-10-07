#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    std::string imagePath = "test.jpg"; // place your test image here
    cv::Mat img = cv::imread(imagePath);

    if(img.empty()) {
        std::cout << "Could not read the image: " << imagePath << std::endl;
        return 1;
    }

    cv::Mat gray;
    cv::cvtColor(img, gray, cv::COLOR_BGR2GRAY);

    cv::imwrite("output.jpg", gray);
    std::cout << "Processed image saved as output.jpg" << std::endl;

    return 0;
}
