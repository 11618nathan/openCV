
#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;


int main()
{
	Mat src1 = imread("test1.jpg");
	Mat src2 = imread("test2.jpg");
	Mat dst;
	dst = src1 + src2;
	imshow("Original Image", src1);
	imshow("Original Image", src2);
	imshow("New Image", dst);
	waitKey(0);
	return 0;
}
