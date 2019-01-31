#include <opencv2/core.hpp>
#include "opencv2/imgproc.hpp"
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>

int main(int argc, char** argv)
{
    cv::String imageName("../purple_red.jpg");
    if( argc > 1) {
        imageName = argv[1];
    }
    cv::Mat image;
    image = cv::imread(imageName, cv::IMREAD_COLOR);
    if(image.empty()) {
        std::cout << "Your pic is not available" << std::endl;
        return -1;
    }

    cv::Mat gray_image;
    cvtColor( image, gray_image, cv::COLOR_BGR2GRAY );
    imwrite( "../Gray_Image.jpg", gray_image );

    namedWindow( "Gray image", cv::WINDOW_NORMAL );
    imshow( "Gray image", gray_image );

    namedWindow("Display window", cv::WND_PROP_FULLSCREEN);
    imshow("Display window", image);

    cv::waitKey(0);

    return 0;
}