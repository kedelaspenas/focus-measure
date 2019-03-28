#include "Fmeasure.hpp"
#include <opencv2/opencv.hpp>

#ifndef FMEASURE_HISR
#define FMEASURE_HISR
class HISR: public Fmeasure {
	public:
		HISR() {
			this->name = "HISR";
		}
		double measure(cv::Mat img);
};
#endif