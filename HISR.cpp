#include "HISR.hpp"
#include <opencv2/opencv.hpp>

double HISR::measure(cv::Mat img) {
	double min, max;
	cv::minMaxLoc(img, &min, &max);
	return max-min;
}