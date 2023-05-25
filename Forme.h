#pragma once
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;

class Forme {
public:
    virtual void dessiner(Mat& image) = 0;
};