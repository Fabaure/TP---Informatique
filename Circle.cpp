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

// Centre
Point Circle::GetCentreCercle()
{
	return CentreCercle;
}
// Rayon
int Circle::GetRayonCercle()
{
	return RayonCercle;
}
// Couleur
Scalar Circle::GetCouleurCercle()
{
	return CouleurCercle;
}
// Epaisseur
int Circle::GetEpaisseurCercle()
{
	return EpaisseurCercle;
}

// Verifie si un point (x, y) est � l'int�rieur du cercle
bool Circle::estpointinterieur(int x, int y) const {
	// Calcul de la distance entre le point (x, y) et le centre du cercle
	double distance = sqrt(pow(x - CentreCercle.x, 2) + pow(y - CentreCercle.y, 2));

	// V�rification si la distance est inf�rieure ou �gale au rayon du cercle
	return distance <= RayonCercle;
}

void Circle::dessiner(Mat& image)
{
	circle(image, CentreCercle, RayonCercle, CouleurCercle, EpaisseurCercle);
}
