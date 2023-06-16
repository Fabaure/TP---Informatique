#pragma once
#include<iostream>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>
#include "Forme.h"

using namespace cv;
using namespace std;

class Rectangle : public Forme {
private:
    Point PointdebutRectangle;
    Point PointfinRectangle;
    Scalar CouleurRectangle;
    int epaisseurRectangle;

public:
    Rectangle();
    Rectangle(Point PointdebutRectangle_, Point PointfinRectangle_, Scalar CouleurRectangle_, int epaisseurRectangle_);
    void dessiner(Mat& image) override;
    Point GetPointdebutRectangle();
    Point GetPointfinRectangle();
    Scalar GetCouleurRectangle();
    int GetEpaisseurRectangle();

};