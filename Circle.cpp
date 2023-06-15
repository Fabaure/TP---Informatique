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
bool Circle::estpointinterieur(int x, int y) const {
	// Calcul de la distance entre le point (x, y) et le centre du cercle
	double distance = std::sqrt(std::pow(x - CentreCercle.x, 2) + std::pow(y - CentreCercle.y, 2));

	// Vérification si la distance est inférieure ou égale au rayon du cercle
	return distance <= RayonCercle;
}

void Circle::dessiner(Mat& image)
{
	circle(image, CentreCercle, RayonCercle, CouleurCercle, EpaisseurCercle);
}
