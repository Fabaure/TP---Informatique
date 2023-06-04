#pragma once
#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Forme.h"
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;

class Triangle : public Forme {
private:
    cv::Point PointsTriangle[3];
    Scalar CouleurTriangle;
    int EpaisseurTriangle;


public:
    Triangle();
    Triangle(Point PointTriangle1_, Point PointTriangle2_, Point PointTriangle3_, Scalar CouleurTriangle_, int EpaisseurTriangle_);
    Point GetPointTriangle1();
    Point GetPointTriangle2();
    Point GetPointTriangle3();
    Scalar GetCouleurTriangle();
    int GetEpaisseurTriangle();
    void dessiner(Mat& image) override;
};

#endif
