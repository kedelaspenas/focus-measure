#include "GLVN.hpp"
#include <opencv2/opencv.hpp>

double GLVN::measure(cv::Mat img) {
	cv::Scalar mean, std;
    cv::meanStdDev(img, mean, std);
    return std[0]*std[0]/mean[0];
}