#include "LigneDroite.h"

using namespace cv;

LigneDroite::LigneDroite()
{
    PointdebutTrait = Point(NULL, NULL);
    PointfinTrait = Point(NULL, NULL);
    CouleurTrait = Scalar(NULL, NULL, NULL);
    Epaisseurtrait = NULL;

}

LigneDroite::LigneDroite(Point PointdebutTrait_, Point PointfinTrait_, Scalar CouleurTrait_, int LargeurTrait_)
{
    PointdebutTrait = PointdebutTrait_;
    PointfinTrait = PointfinTrait_;
    CouleurTrait = CouleurTrait_;
    Epaisseurtrait = LargeurTrait_;
}
// Point de depart
Point LigneDroite::GetPointdebutTrait()
{
    return PointdebutTrait;
}
// Point d'arrivé
Point LigneDroite::GetPointfinTrait()
{
    return PointfinTrait;
}
// Couleur
Scalar LigneDroite::GetCouleurTrait()
{
    return CouleurTrait;
}
// Epaisseur
int LigneDroite::GetEpaisseurTrait()
{
    return Epaisseurtrait;
}

void LigneDroite::dessiner(Mat& image) {
    line(image, PointdebutTrait, PointfinTrait, CouleurTrait, Epaisseurtrait);
}

// Verifie si un point (x, y) est à l'intérieur du de la ligne droite
bool LigneDroite::estpointinterieur(int x, int y) const {
    // Vérification si le point est sur la ligne droite
    return (x >= PointdebutTrait.x && x <= PointfinTrait.x && y >= PointdebutTrait.y && y <= PointfinTrait.y) || (x <= PointdebutTrait.x && x >= PointfinTrait.x && y <= PointdebutTrait.y && y >= PointfinTrait.y) || (x >= PointdebutTrait.x && x <= PointfinTrait.x && y <= PointdebutTrait.y && y >= PointfinTrait.y) || (x <= PointdebutTrait.x && x >= PointfinTrait.x && y >= PointdebutTrait.y && y <= PointfinTrait.y);

}