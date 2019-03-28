#include "Fmeasure.hpp"
#include <opencv2/opencv.hpp>

#ifndef FMEASURE_ACMO
#define FMEASURE_ACMO
class ACMO: public Fmeasure {
	public:
		ACMO() {
			this->name = "ACMO";
		}
		double measure(cv::Mat img);
};
#endif