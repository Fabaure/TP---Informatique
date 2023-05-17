#include<iostream>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>
using namespace cv;
using namespace std;
int Circle() {
	Mat whiteMatrix(20000, 20000, CV_8UC3, Scalar(255, 255, 255));//Declaring a white matrix//
	Point center(500, 500);//Starting Point of the line
	int radius = 300;//Ending Point of the line
	Scalar line_Color(0, 0, 0);//Color of the line
	int thickness = 2;//thickens of the line
	namedWindow("GrayImage");//Declaring a window to show the line
	circle(whiteMatrix, center, radius, line_Color, thickness);//using line() function to draw the line//
	imshow("GrayImage", whiteMatrix);//showing the line//
	waitKey(0);//Waiting for KeyStroke
	return 0;

}

int rectangle() {
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

int main() {
	cout << circle() << rectangle();
}