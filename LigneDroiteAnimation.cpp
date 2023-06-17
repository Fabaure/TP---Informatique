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
// Point de depart
Point LigneDroiteAnimation::GetPointdebutTraitAnime()
{
    return PointdebutTraitAnimation;
}
// Point d'arrive
Point LigneDroiteAnimation::GetPointfinTraitAnime()
{
    return PointfinTraitAnimation;
}
// Couleur
Scalar LigneDroiteAnimation::GetCouleurTraitAnime()
{
    return CouleurTraitAnimation;
}
// Epaisseur
int LigneDroiteAnimation::GetEpaisseurTraitAnime()
{
    return EpaisseurTraitAnimation;
}
// Decalage Horizontal
int LigneDroiteAnimation::GetDecalageXTraitAnime()
{
    return DecalageXTraitAnimation;
}
// Decalage Vertical
int LigneDroiteAnimation::GetDecalageYTraitAnime()
{
    return DecalageYTraitAnimation;
}

// Anime le trait en le deplaçant selon les décalages spécifies
void LigneDroiteAnimation::AnimationTraitAnime()
{
    PointdebutTraitAnimation += Point(DecalageXTraitAnimation, DecalageYTraitAnimation);
    PointfinTraitAnimation += Point(DecalageXTraitAnimation, DecalageYTraitAnimation);
    if (PointdebutTraitAnimation.x <= 0 || PointfinTraitAnimation.x >= 1520)
        DecalageXTraitAnimation = -DecalageXTraitAnimation;
    if (PointdebutTraitAnimation.y <= 0 || PointfinTraitAnimation.y >= 800)
        DecalageYTraitAnimation = -DecalageYTraitAnimation;
}

// Vérifie si un point (x, y) est à l'intérieur du trait animé
bool LigneDroiteAnimation::estpointinterieur(int x, int y) const
{
    return (x >= PointdebutTraitAnimation.x && x <= PointfinTraitAnimation.x && y >= PointdebutTraitAnimation.y && y <= PointfinTraitAnimation.y) || (x <= PointdebutTraitAnimation.x && x >= PointfinTraitAnimation.x && y <= PointdebutTraitAnimation.y && y >= PointfinTraitAnimation.y) || (x >= PointdebutTraitAnimation.x && x <= PointfinTraitAnimation.x && y <= PointdebutTraitAnimation.y && y >= PointfinTraitAnimation.y) || (x <= PointdebutTraitAnimation.x && x >= PointfinTraitAnimation.x && y >= PointdebutTraitAnimation.y && y <= PointfinTraitAnimation.y);

}

