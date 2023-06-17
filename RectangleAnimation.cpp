#include "RectangleAnimation.h"
#include "Dessins.h"


RectangleAnimation::RectangleAnimation()
{
    PointdebutRectangleAnime = Point(NULL, NULL);
    PointfinRectangleAnime = Point(NULL, NULL);
    CouleurRectangleAnime = Scalar(NULL, NULL, NULL);
    EpaisseurRectangleAnime = NULL;
    DecalageXRectangleAnime = NULL;
    DecalageYRectangleAnime = NULL;
}

RectangleAnimation::RectangleAnimation(Point PointdebutRectangleAnime_, Point PointfinRectangleAnime_, Scalar CouleurRectangleAnime_, int epaisseurRectangleAnime_, int DecalageXRectangleAnime_, int DecalageYRectangleAnime_)
{
    PointdebutRectangleAnime = PointdebutRectangleAnime_;
    PointfinRectangleAnime = PointfinRectangleAnime_;
    CouleurRectangleAnime = CouleurRectangleAnime_;
    EpaisseurRectangleAnime = epaisseurRectangleAnime_;
    DecalageXRectangleAnime = DecalageXRectangleAnime_;
    DecalageYRectangleAnime = DecalageYRectangleAnime_;
}

void RectangleAnimation::dessiner(Mat& image)
{
        rectangle(image, PointdebutRectangleAnime, PointfinRectangleAnime, CouleurRectangleAnime, EpaisseurRectangleAnime);  
}
// Point début
Point RectangleAnimation::GetPointdebutRectangleAnime()
{
    return PointdebutRectangleAnime;
}
// Point d'arrivé
Point RectangleAnimation::GetPointfinRectangleAnime()
{
    return PointfinRectangleAnime;
}
// Couleur
Scalar RectangleAnimation::GetCouleurRectangleAnime()
{
    return CouleurRectangleAnime;
}
// Epaisseur
int RectangleAnimation::GetEpaisseurRectangleAnime()
{
    return EpaisseurRectangleAnime;
}
// Décalage Horizontal
int RectangleAnimation::GetDecalageXRectangleAnime()
{
    return DecalageXRectangleAnime;
}
// Décalage Vertical
int RectangleAnimation::GetDecalageYRectangleAnime()
{
    return DecalageYRectangleAnime;
}

// Anime le rectangle en le deplaçant selon les décalages spécifies
void RectangleAnimation::AnimationRectangleAnime()
{
    PointdebutRectangleAnime += Point(DecalageXRectangleAnime,DecalageYRectangleAnime);
    PointfinRectangleAnime += Point(DecalageXRectangleAnime, DecalageYRectangleAnime);
    if (PointdebutRectangleAnime.x <= 0 || PointfinRectangleAnime.x >= 1520)
        DecalageXRectangleAnime = -DecalageXRectangleAnime;
    if (PointdebutRectangleAnime.y <= 0 || PointfinRectangleAnime.y >= 800)
        DecalageYRectangleAnime = -DecalageYRectangleAnime;

}

// Vérifie si un point (x, y) est à l'intérieur du rectangle animé
bool RectangleAnimation::estpointinterieur(int x, int y) const
{
    return (x >= PointdebutRectangleAnime.x && x <= PointfinRectangleAnime.x && y >= PointdebutRectangleAnime.y && y <= PointfinRectangleAnime.y) || (x <= PointdebutRectangleAnime.x && x >= PointfinRectangleAnime.x && y <= PointdebutRectangleAnime.y && y >= PointfinRectangleAnime.y) || (x >= PointdebutRectangleAnime.x && x <= PointfinRectangleAnime.x && y <= PointdebutRectangleAnime.y && y >= PointfinRectangleAnime.y) || (x <= PointdebutRectangleAnime.x && x >= PointfinRectangleAnime.x && y >= PointdebutRectangleAnime.y && y <= PointfinRectangleAnime.y);

}

