#include <iostream>
#include <opencv2/opencv.hpp>
using namespace cv;
int main()
{
	cv::Mat src = imread("C:/Users/hp/Desktop/3.jpg");
	cv::Point pt;
	pt.x = 500;
	pt.y = 500;
	circle(src, pt, 30, CV_RGB(255, 0, 0), 1, 8, 0);

	cv::Point pt1, pt2;
	pt1.x = 50;
	pt1.y = 50;
	pt2.x = 100;
	pt2.y = 100;
	line(src, pt1, pt2, CV_RGB(255, 0, 0), 1, 8, 0);

	cv::Rect rect;
	rect.x = 100;
	rect.y = 100;
	rect.width=200;
	rect.height=100;
	rectangle(src, rect, CV_RGB(255, 0, 0), 1, 8, 0);

	cv::imshow("src", src);

	waitKey(0);
	return(0);
	
}