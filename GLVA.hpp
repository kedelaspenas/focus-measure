#include "Fmeasure.hpp"
#include <opencv2/opencv.hpp>

#ifndef FMEASURE_GLVA
#define FMEASURE_GLVA
class GLVA: public Fmeasure {
	public:
		GLVA() {
			this->name = "GLVA";
		}
		double measure(cv::Mat img);
};
#endif