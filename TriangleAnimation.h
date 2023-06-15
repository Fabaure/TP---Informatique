#pragma once
#include "Forme.h"
class TriangleAnimation : public Forme
{
private:
    Point PointsTriangleAnimation[3];
    Scalar CouleurTriangleAnimation;
    int EpaisseurTriangleAnimation;
    int DecalageXTriangleAnimation;
    int DecalageYTriangleAnimation;

public:
    TriangleAnimation();
    TriangleAnimation(Point PointsTriangleAnimation1_, Point PointstriangleAnimation2_, Point PointstriangleAnimation3_, Scalar CouleurTriangleAnimation_, int EpaisseurTriangleAnimation_, int DecalageXtriangleAnimation_, int DecalageYtriangleAnimation_);
    Point GetPointTriangleAnimation1();
    Point GetPointTriangleAnimation2();
    Point GetPointTriangleAnimation3();
    Scalar GetCouleurTriangleAnimation();
    int GetEpaisseurTriangleAnimation();
    void dessiner(Mat& image) override;
    void AnimationTriangleAnime();
};

