#pragma once
#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Forme.h"
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;

class Triangle : public Forme {
private:
    Point PointsTriangle[3];   // Tableau de 3 points representant les sommets du triangle
    Scalar CouleurTriangle;    // Couleur du triangle (type de donnees OpenCV)
    int EpaisseurTriangle;     // Epaisseur du trait du triangle

public:
    Triangle();
    Triangle(Point PointTriangle1_, Point PointTriangle2_, Point PointTriangle3_, Scalar CouleurTriangle_, int EpaisseurTriangle_);
    Point GetPointTriangle1();
    Point GetPointTriangle2();
    Point GetPointTriangle3();
    Scalar GetCouleurTriangle();
    int GetEpaisseurTriangle();
    
    // Methode pour dessiner le triangle sur une image
    void dessiner(Mat& image) override;

    // Methode pour verifier si un point est a l'interieur du triangle
    bool estpointinterieur(int x, int y) const override;
};

#endif
