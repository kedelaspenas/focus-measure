#include <iostream>
#include <opencv2/opencv.hpp>
#include <string>
#include "GLVA.hpp"
#include "GLVN.hpp"
#include "HISR.hpp"
#include "ACMO.hpp"
#include "TENG.hpp"
#include "TENV.hpp"

int main(int argc, char** argv) {
    if ( argc != 2 )
    {
        std::cout << "usage: DisplayImage.out <Image_Path>\n";
        return -1;
    }
    cv::Mat image;
    image = cv::imread( argv[1], 1 );
    if ( !image.data )
    {
        std::cout << "No image data \n";
        return -1;
    }
    
    cv::Mat gray;
    cv::cvtColor(image, gray, cv::COLOR_BGR2GRAY);

    GLVA glva;
    std::cout << glva.measure(gray) << std::endl;

    GLVN glvn;
    std::cout << glvn.measure(gray) << std::endl;

    HISR hisr;
    std::cout << hisr.measure(gray) << std::endl;
    /* not yet working */
    //ACMO acmo;
    //std::cout << acmo.measure(gray) << std::endl;

    TENG teng;
    std::cout << teng.measure(gray) << std::endl;

    TENV tenv;
    std::cout << tenv.measure(gray) << std::endl;

    return 0;
}