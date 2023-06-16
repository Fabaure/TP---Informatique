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
    int Epaisseurtrait;


public:
    LigneDroite();
    LigneDroite(Point PointdebutTrait_, Point PointfinTrait_, Scalar CouleurTrait_, int LargeurTrait_);
    Point GetPointdebutTrait();
    Point GetPointfinTrait();
    Scalar GetCouleurTrait();
<<<<<<< HEAD
    int GetLargeurTrait();
=======
    int GetEpaisseurTrait();


>>>>>>> f5d52f47034f22fbb3f04ddeee3f6384e7f0984a
    void dessiner(Mat& image) override;
    bool estpointinterieur(int x, int y) const override;
};

#endif
