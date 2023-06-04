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
