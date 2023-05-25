#pragma once
#include<iostream>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>

using namespace cv;
using namespace std;

int Rectangle() {
	Mat whiteMatrix(200, 200, CV_8UC3, Scalar(255, 255, 255));// Declaring a white matrix//
	Point starting(40, 40);//Declaring the starting coordinate//
	Point ending(160, 100);//Declaring the ending coordinate
	Scalar line_Color(0, 0, 0);//Color of the rectangle//
	int thickness = 2;//thickens of the line//
	namedWindow("whiteMatrix");//Declaring a window to show the rectangle//
	rectangle(whiteMatrix, starting, ending, line_Color, thickness);//Drawing the rectangle//
	imshow("WhiteMatrix", whiteMatrix);//Showing the rectangle//
	waitKey(0);//Waiting for Keystroke
	return 0;
}