#include "Triangle.h"

void Triangle::dessiner(cv::Mat& image) {
    cv::Point points[3];
    points[0] = cv::Point(100, 100);
    points[1] = cv::Point(200, 100);
    points[2] = cv::Point(150, 200);
    const cv::Point* contours[1] = { points };
    int numPoints[] = { 3 };
    cv::polylines(image, contours, numPoints, 1, true, cv::Scalar(0, 0, 255), 2);
}
