#include "TENG.hpp"
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc/imgproc.hpp>

double TENG::measure(cv::Mat img) {
	int scale = 1;
	int delta = 0;
	int ddepth = CV_16S;
	cv::Mat grad_x, grad_y;
	
	cv::Sobel( img, grad_x, ddepth, 1, 0, 3, scale, delta, cv::BORDER_DEFAULT );

  	cv::Sobel( img, grad_y, ddepth, 0, 1, 3, scale, delta, cv::BORDER_DEFAULT );

  	cv::pow(grad_x, 2.0, grad_x);
  	cv::pow(grad_y, 2.0, grad_y);

  	cv::meanStdDev(grad_x + grad_y, this->mean, this->std);

  	return this->mean[0];
}