#include "LigneDroite.h"

using namespace cv;

LigneDroite::LigneDroite()
{
    PointdebutTrait = Point(NULL, NULL);
    PointfinTrait = Point(NULL, NULL);
    CouleurTrait = Scalar(NULL, NULL, NULL);
    Largeurtrait = NULL;

}

LigneDroite::LigneDroite(Point PointdebutTrait_, Point PointfinTrait_, Scalar CouleurTrait_, int LargeurTrait_)
{
    PointdebutTrait = PointdebutTrait_;
    PointfinTrait = PointfinTrait_;
    CouleurTrait = CouleurTrait_;
    Largeurtrait = LargeurTrait_;
}

Point LigneDroite::GetPointdebutTrait()
{
    return PointdebutTrait;
}

Point LigneDroite::GetPointfinTrait()
{
    return PointfinTrait;
}

Scalar LigneDroite::GetCouleurTrait()
{
    return CouleurTrait;
}

int LigneDroite::GetLargeurTrait()
{
    return Largeurtrait;
}

void LigneDroite::dessiner(Mat& image) {
    line(image, PointdebutTrait, PointfinTrait, CouleurTrait, Largeurtrait);
}

bool LigneDroite::estpointinterieur(int x, int y) const {
    // Vérification si le point est sur la ligne droite
    int dx = PointfinTrait.x - PointdebutTrait.x;
    int dy = PointfinTrait.y - PointdebutTrait.y;
    int dpx = x - PointdebutTrait.x;
    int dpy = y - PointdebutTrait.y;

    int dot = dx * dpx + dy * dpy;

    // Calcul de la longueur au carré de la ligne droite
    int lengthSquare = dx * dx + dy * dy;

    // Vérification si le point est à proximité de la ligne droite
    // en utilisant le produit scalaire et la longueur de la ligne droite
    return dot >= 0 && dot <= lengthSquare;
}