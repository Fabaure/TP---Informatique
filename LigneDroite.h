#pragma once
#include "Forme.h"
#include <opencv2/opencv.hpp>
class LigneDroite : public Forme {
public:
    void dessiner(Mat& image) {
        line(image, Point(300, 100), Point(500, 200), Scalar(0, 255, 0), 2);
    }
};