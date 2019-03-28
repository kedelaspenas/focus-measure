#include "TENG.hpp"
#include <opencv2/opencv.hpp>

#ifndef FMEASURE_TENV
#define FMEASURE_TENV
class TENV: public TENG {
	public:
		TENV() {
			TENG::name = "TENV";
		}
		double measure(cv::Mat img);
};
#endif