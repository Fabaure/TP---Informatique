#pragma once
#include "Forme.h"

class RectangleAnimation : public Forme
{
private:
       Point PointdebutRectangleAnime;
       Point PointfinRectangleAnime;
       Scalar CouleurRectangleAnime;
       int EpaisseurRectangleAnime;
       int DecalageXRectangleAnime;
       int DecalageYRectangleAnime;

public:
    RectangleAnimation();
    RectangleAnimation(Point PointdebutRectangleAnime_, Point PointfinRectangleAnime_, Scalar CouleurRectangleAnime_, int epaisseurRectangleAnime_, int DecalageXRectangleAnime_, int DecalageYRectangleAnime_);
    void dessiner(Mat& image) override;
    Point GetPointdebutRectangleAnime();
    Point GetPointfinRcetangleAnime();
    Scalar GetCouleurRectangleAnime();
    int GetEpaisseurRectangleAnime();
    int GetDecalageXRectangleAnime();
    int GetDecalageYRectangleAnime();
    void move();
};

