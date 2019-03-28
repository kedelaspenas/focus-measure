#include "Fmeasure.hpp"
#include <opencv2/opencv.hpp>

#ifndef FMEASURE_TENG
#define FMEASURE_TENG
class TENG: public Fmeasure {
	protected:
		cv::Scalar mean;
		cv::Scalar std;
	public:
		TENG() {
			this->name = "TENG";
		}
		double measure(cv::Mat img);
};
#endif