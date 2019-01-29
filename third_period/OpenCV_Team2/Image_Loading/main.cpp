#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>
#include <string>

int main( int argc, char** argv )
{
    cv::String imageName( "../blabla.jpg" );
    if( argc > 1)
    {
        imageName = argv[1];
    }
    cv::Mat image;
    image = cv::imread( imageName, cv::IMREAD_COLOR );
    if( image.empty() )
    {
        std::cout <<  "Sorry baby, I can't find the image." << std::endl ;
        return -1;
    }
    namedWindow( "Display window", cv::WND_PROP_FULLSCREEN  );
    imshow( "Display window", image );
    cv::waitKey(0); 
    return 0;
}