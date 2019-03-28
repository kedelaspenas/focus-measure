#ifndef FMEASURE
#define FMEASURE
#include <opencv2/opencv.hpp>
#include <string>

class Fmeasure {
	protected:
		std::string name;
	public:
		Fmeasure();
		Fmeasure(std::string name);
		virtual double measure(cv::Mat img) { return 0; };
};
#endif