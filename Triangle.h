#pragma once
#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Forme.h"
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;

class Triangle : public Forme {
public:
    void dessiner(Mat& image) override;
};

#endif
