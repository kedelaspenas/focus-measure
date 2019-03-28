#include "Fmeasure.hpp"
#include <opencv2/opencv.hpp>

#ifndef FMEASURE_GLVN
#define FMEASURE_GLVN
class GLVN: public Fmeasure {
	public:
		GLVN() {
			this->name = "GLVN";
		}
		double measure(cv::Mat img);
};
#endif