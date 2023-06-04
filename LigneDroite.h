#pragma once
#ifndef LIGNEDROITE_H
#define LIGNEDROITE_H
#include "Forme.h"
#include <opencv2/opencv.hpp>

using namespace cv;

class LigneDroite : public Forme {
private:
    Point PointdebutTrait;
    Point PointfinTrait;
    Scalar CouleurTrait;
    int Largeurtrait;


public:
    LigneDroite();
    LigneDroite(Point PointdebutTrait_, Point PointfinTrait_, Scalar CouleurTrait_, int LargeurTrait_);
    Point GetPointdebutTrait();
    Point GetPointfinTrait();
    Scalar GetCouleurTrait();
    int GetLargeurTrait();


    void dessiner(Mat& image) override;
};

#endif
