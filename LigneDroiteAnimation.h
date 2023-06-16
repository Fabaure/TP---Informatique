#pragma once
#include "Forme.h"

class LigneDroiteAnimation : public Forme
{
private:
    Point PointdebutTraitAnimation;
    Point PointfinTraitAnimation;
    Scalar CouleurTraitAnimation;
    int EpaisseurTraitAnimation;
    int DecalageXTraitAnimation;
    int DecalageYTraitAnimation;

public:
    LigneDroiteAnimation();
    LigneDroiteAnimation(Point PointdebutTraitAnimation_, Point PointfinTraitAnimation_, Scalar CouleurTraitAnimation_, int EpaisseurTraitAnimation_, int DecalageXTraitAnimation_, int DecalageYTraitAnimation_);
    void dessiner(Mat& image) override;
    Point GetPointdebutTraitAnime();
    Point GetPointfinTraitAnime();
    Scalar GetCouleurTraitAnime();
    int GetEpaisseurTraitAnime();
    int GetDecalageXTraitAnime();
    int GetDecalageYTraitAnime();
    void AnimationTraitAnime();
    bool estpointinterieur(int x, int y) const override;

};

