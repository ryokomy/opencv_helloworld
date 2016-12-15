#include <iostream>
#include <opencv2/opencv.hpp>

int main(int argc, const char * argv[])
{
    cv::Mat img;
    img = cv::imread("../img/opencv_helloworld.png");
    cv::imshow("OpenCV HelloWorld Window", img);
    cv::waitKey(0);
    
    return 0;
}