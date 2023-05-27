#pragma once
#ifndef LIGNEDROITE_H
#define LIGNEDROITE_H
#include "Forme.h"
#include <opencv2/opencv.hpp>

using namespace cv;

class LigneDroite : public Forme {
public:
    void dessiner(Mat& image) override;
};

#endif
