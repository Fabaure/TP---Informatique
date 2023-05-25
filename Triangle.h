#pragma once
#include "Forme.h"
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
class Triangle : public Forme {
public:
    void dessiner(Mat& image) {
        Point points[3];
        points[0] = Point(100, 100);
        points[1] = Point(200, 100);
        points[2] = Point(150, 200);
        const Point* contours[1] = { points };
        int numPoints[] = { 3 };
        polylines(image, contours, numPoints, 1, true, Scalar(0, 0, 255), 2);
    }
};