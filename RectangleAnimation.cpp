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

Point RectangleAnimation::GetPointdebutRectangleAnime()
{
    return PointdebutRectangleAnime;
}

Point RectangleAnimation::GetPointfinRectangleAnime()
{
    return PointfinRectangleAnime;
}

Scalar RectangleAnimation::GetCouleurRectangleAnime()
{
    return CouleurRectangleAnime;
}

int RectangleAnimation::GetEpaisseurRectangleAnime()
{
    return EpaisseurRectangleAnime;
}

int RectangleAnimation::GetDecalageXRectangleAnime()
{
    return DecalageXRectangleAnime;
}

int RectangleAnimation::GetDecalageYRectangleAnime()
{
    return DecalageYRectangleAnime;
}

void RectangleAnimation::AnimationRectangleAnime()
{
    PointdebutRectangleAnime += Point(DecalageXRectangleAnime,DecalageYRectangleAnime);
    PointfinRectangleAnime += Point(DecalageXRectangleAnime, DecalageYRectangleAnime);
    if (PointdebutRectangleAnime.x <= 0 || PointfinRectangleAnime.x >= 1520)
        DecalageXRectangleAnime = -DecalageXRectangleAnime;
    if (PointdebutRectangleAnime.y <= 0 || PointfinRectangleAnime.y >= 800)
        DecalageYRectangleAnime = -DecalageYRectangleAnime;

}


