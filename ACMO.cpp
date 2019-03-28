#include "ACMO.hpp"
#include <opencv2/opencv.hpp>
#include <iostream>
#include <string>

/* not yet working */
double ACMO::measure(cv::Mat img) {
	/*
[M, N] = size(Image);
Hist = imhist(Image)/(M*N);
Hist = abs((0:255)-mean2(Image))'.*Hist;
fm = sum(Hist);
	*/
	int M = img.rows;
	int N = img.cols;
	int histSize = 256;
	int channels = 1;
	float range[] = {0, 256};
	const float* histRange = { range };

	cv::Mat hist;
	calcHist(&img, 1, &channels, cv::Mat(), hist, 2, &histSize, &histRange, true, false);
	std::cout << hist << std::endl;
	return sum(hist)[0];
}