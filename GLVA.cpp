#include "GLVA.hpp"
#include <opencv2/opencv.hpp>

double GLVA::measure(cv::Mat img) {
	cv::Scalar mean, std;
    cv::meanStdDev(img, mean, std);
    return std[0];
}