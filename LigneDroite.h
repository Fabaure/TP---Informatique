#pragma once
#ifndef LIGNEDROITE_H
#define LIGNEDROITE_H
#include "Forme.h"
#include <opencv2/opencv.hpp>

using namespace cv;

class LigneDroite : public Forme {
private:
    Point PointdebutTrait; // Point de depart de la ligne droite
    Point PointfinTrait;   // Point d'arrivée de la ligne droite
    Scalar CouleurTrait;   // Couleur de la ligne droite
    int Epaisseurtrait;    // Epaisseur de la ligne droite


public:
    LigneDroite();
    LigneDroite(Point PointdebutTrait_, Point PointfinTrait_, Scalar CouleurTrait_, int LargeurTrait_);
    Point GetPointdebutTrait();
    Point GetPointfinTrait();
    Scalar GetCouleurTrait();
    int GetEpaisseurTrait();
    
    // Methode pour dessiner le cercle sur une image
    void dessiner(Mat& image) override;

    // Methode pour verifier si le curseur est à l'intérieur du cercle
    bool estpointinterieur(int x, int y) const override;
};

#endif
