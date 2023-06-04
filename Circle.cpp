#include "Circle.h"

Circle::Circle()
{
	CentreCercle = Point(NULL, NULL);
	RayonCercle = NULL;
	CouleurCercle = (NULL, NULL, NULL);
	EpaisseurCercle = NULL;
}

Circle::Circle(Point CentreCercle_, int RayonCercle_, Scalar CouleurCercle_, int EpaisseurCercle_)
{
	CentreCercle = CentreCercle_;
	RayonCercle = RayonCercle_;
	CouleurCercle = CouleurCercle_;
	EpaisseurCercle = EpaisseurCercle_;
}

Point Circle::GetCentreCercle()
{
	return CentreCercle;
}

int Circle::GetRayonCercle()
{
	return RayonCercle;
}

Scalar Circle::GetCouleurCercle()
{
	return CouleurCercle;
}

int Circle::GetEpaisseurCercle()
{
	return EpaisseurCercle;
}

void Circle::dessiner(Mat& image)
{
	circle(image, CentreCercle, RayonCercle, CouleurCercle, EpaisseurCercle);
}
