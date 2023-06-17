#pragma once
#include "Forme.h"

class RectangleAnimation : public Forme
{
private:
    Point PointdebutRectangleAnime;   // Point du coin superieur gauche du rectangle anime
    Point PointfinRectangleAnime;     // Point du coin inferieur droit du rectangle anime
    Scalar CouleurRectangleAnime;     // Couleur du rectangle anime
    int EpaisseurRectangleAnime;      // Epaisseur du rectangle anime
    int DecalageXRectangleAnime;      // Decalage horizontal du rectangle anime
    int DecalageYRectangleAnime;      // Decalage vertical du rectangle anime

public:
    RectangleAnimation();
    RectangleAnimation(Point PointdebutRectangleAnime_, Point PointfinRectangleAnime_, Scalar CouleurRectangleAnime_, int epaisseurRectangleAnime_, int DecalageXRectangleAnime_, int DecalageYRectangleAnime_);
    
    // Methode pour dessiner le rectangle anime sur une image
    void dessiner(Mat& image) override;
    
    Point GetPointdebutRectangleAnime();
    Point GetPointfinRectangleAnime();
    Scalar GetCouleurRectangleAnime();
    int GetEpaisseurRectangleAnime();
    int GetDecalageXRectangleAnime();
    int GetDecalageYRectangleAnime();
    
    // Methode pour verifier si un point est à l'interieur du rectangle animee
    bool estpointinterieur(int x, int y) const override;

    // Methode pour anime le rectangle
    void AnimationRectangleAnime();
};

