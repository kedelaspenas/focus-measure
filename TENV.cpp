#include "TENV.hpp"
#include "TENG.hpp"
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc/imgproc.hpp>

double TENV::measure(cv::Mat img) {
	TENG::measure(img);
  	return this->std[0];
}