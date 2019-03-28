#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <string>
#include "FmeasureFactory.hpp"

cv::Mat getBestFrame(cv::VideoCapture capture, Fmeasure* m, int* frameNumber) {
    assert(m != NULL);
    cv::Mat frame, best;
    double val = 0, temp;
     if( !capture.isOpened() )
        throw "Error when reading";

    int ctr;
    for( ctr = 0; ; ctr++) {
        capture >> frame;
        if(frame.empty())
            break;
        cv::cvtColor(frame, frame, cv::COLOR_BGR2GRAY);
        temp = m->measure(frame);
        if (temp > val) {
            best = frame;
            val = temp;
            *frameNumber = ctr;
        }
    }

    return best;
}

int main(int argc, char** argv)
{
    // open video file
    std::string filename = "MVI_5560.MOV";
    if (argc > 1)
        filename = std::string(argv[1]);
    std::cout << "Target video file is " << filename << "\n";
    cv::VideoCapture capture(filename);
    cv::Mat frame;

    // get focus measure desired
    std::string measure = "GLVN";
    if (argc > 2)
        measure = std::string(argv[2]);
    std::cout << "Using " << measure << " as focus measure\n";

    int frameNumber;
    frame = getBestFrame(capture, FmeasureFactory::getMeasure(measure), &frameNumber);;

    cv::imwrite("best.jpg", frame);
    std::cout << frameNumber << "\n";
}