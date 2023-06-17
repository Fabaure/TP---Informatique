#pragma once
#include<iostream>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>
#include "Forme.h"

using namespace cv;
using namespace std;

class Rectangle : public Forme {
private:
    Point PointdebutRectangle; // Point du coin sup�rieur gauche du rectangle
    Point PointfinRectangle;   // Point du coin inf�rieur droit du rectangle
    Scalar CouleurRectangle;   // Couleur du rectangle
    int epaisseurRectangle;    // Epaisseur du rectangle

public:
    Rectangle();
    Rectangle(Point PointdebutRectangle_, Point PointfinRectangle_, Scalar CouleurRectangle_, int epaisseurRectangle_);
    
    // M�thode pour dessiner le rectange sur une image
    void dessiner(Mat& image) override;
    
    Point GetPointdebutRectangle();
    Point GetPointfinRectangle();
    Scalar GetCouleurRectangle();
    int GetEpaisseurRectangle();

    // M�thode pour v�rifier si un point est � l'int�rieur du rectangle
    bool estpointinterieur(int x, int y) const override;
};