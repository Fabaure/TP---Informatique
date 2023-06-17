#pragma once
#include "Forme.h"
class TriangleAnimation : public Forme
{
private:
    Point PointsTriangleAnimation[3];  // Tableau de 3 points representant les sommets du triangle anime
    Scalar CouleurTriangleAnimation;   // Couleur du triangle anime (type de donnees OpenCV)
    int EpaisseurTriangleAnimation;    // Epaisseur du trait du triangle anime
    int DecalageXTriangleAnimation;    // Decalage horizontal pour l'animation du triangle
    int DecalageYTriangleAnimation;    // Decalage vertical pour l'animation du triangle

public:
    TriangleAnimation();
    TriangleAnimation(Point PointsTriangleAnimation1_, Point PointstriangleAnimation2_, Point PointstriangleAnimation3_, Scalar CouleurTriangleAnimation_, int EpaisseurTriangleAnimation_, int DecalageXtriangleAnimation_, int DecalageYtriangleAnimation_);
    Point GetPointTriangleAnimation1();
    Point GetPointTriangleAnimation2();
    Point GetPointTriangleAnimation3();
    Scalar GetCouleurTriangleAnimation();
    int GetEpaisseurTriangleAnimation();
    int GetDecalageXTriangleAnimation();
    int GetDecalageYTriangleAnimation();
    
    // Methode pour dessiner le triangle anime sur une image
    void dessiner(Mat& image) override;

    // Methode pour animer le triangle anime
    void AnimationTriangleAnime();

    // Methode pour verifier si un point est a l'interieur du triangle anime
    bool estpointinterieur(int x, int y) const override;

};

