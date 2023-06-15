#include "LigneDroiteAnimation.h"

LigneDroiteAnimation::LigneDroiteAnimation()
{
    PointdebutTraitAnimation = Point(NULL, NULL);
    PointfinTraitAnimation = Point(NULL, NULL);
    EpaisseurTraitAnimation = NULL;
    DecalageXTraitAnimation = NULL;
    DecalageYTraitAnimation = NULL;
}

LigneDroiteAnimation::LigneDroiteAnimation(Point PointdebutTraitAnimation_, Point PointfinTraitAnimation_, Scalar CouleurTraitAnimation_, int EpaisseurTraitAnimation_, int DecalageXTraitAnimation_, int DecalageYTraitAnimation_)
{
    PointdebutTraitAnimation = PointdebutTraitAnimation_;
    PointfinTraitAnimation = PointfinTraitAnimation_;
    CouleurTraitAnimation = CouleurTraitAnimation_;
    DecalageXTraitAnimation = DecalageXTraitAnimation_;
    DecalageYTraitAnimation = DecalageYTraitAnimation_;
    EpaisseurTraitAnimation = EpaisseurTraitAnimation_;
}

void LigneDroiteAnimation::dessiner(Mat& image)
{
    line(image, PointdebutTraitAnimation, PointfinTraitAnimation, CouleurTraitAnimation, EpaisseurTraitAnimation);
}

Point LigneDroiteAnimation::GetPointdebutTraitAnime()
{
    return PointdebutTraitAnimation;
}

Point LigneDroiteAnimation::GetPointfinTraitAnime()
{
    return PointfinTraitAnimation;
}

Scalar LigneDroiteAnimation::GetCouleurTraitAnime()
{
    return CouleurTraitAnimation;
}

int LigneDroiteAnimation::GetEpaisseurTraitAnime()
{
    return EpaisseurTraitAnimation;
}

int LigneDroiteAnimation::GetDecalageXTraitAnime()
{
    return DecalageXTraitAnimation;
}

int LigneDroiteAnimation::GetDecalageYTraitAnime()
{
    return DecalageYTraitAnimation;
}

void LigneDroiteAnimation::AnimationTraitAnime()
{
    PointdebutTraitAnimation += Point(DecalageXTraitAnimation, DecalageYTraitAnimation);
    PointfinTraitAnimation += Point(DecalageXTraitAnimation, DecalageYTraitAnimation);
    if (PointdebutTraitAnimation.x <= 0 || PointfinTraitAnimation.x >= 1520)
        DecalageXTraitAnimation = -DecalageXTraitAnimation;
    if (PointdebutTraitAnimation.y <= 0 || PointfinTraitAnimation.y >= 800)
        DecalageYTraitAnimation = -DecalageYTraitAnimation;
}