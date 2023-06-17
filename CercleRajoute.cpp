#include "CercleRajoute.h"

CercleRajoute::CercleRajoute()
{
	CentreCercleRajoute = Point(NULL, NULL);
	RayonCercleRajoute = NULL;
	CouleurCercleRajoute = Scalar(NULL, NULL, NULL);
	EpaisseurCercleRajoute = NULL;
}

CercleRajoute::CercleRajoute(Point CentreCercleRajoute_, int RayonCercleRajoute_, Scalar CouleurCercleRajoute_, int EpaisseurCercleRajoute_)
{
	CentreCercleRajoute = CentreCercleRajoute_;
	RayonCercleRajoute = RayonCercleRajoute_;
	CouleurCercleRajoute = CouleurCercleRajoute_;
	EpaisseurCercleRajoute = EpaisseurCercleRajoute_;
}

// Methode pour dessiner le cercle sur une image
void CercleRajoute::dessiner(Mat& image)
{
	circle(image, CentreCercleRajoute, RayonCercleRajoute, CouleurCercleRajoute, EpaisseurCercleRajoute);
}

// Methode pour verifier si un point est a l'interieur du cercle
bool CercleRajoute::estpointinterieur(int x, int y) const
{
	// Calcul de la distance entre le point (x, y) et le centre du cercle
	double distance = sqrt(pow(x - CentreCercleRajoute.x, 2) + pow(y - CentreCercleRajoute.y, 2));

	// Vérification si la distance est inférieure ou égale au rayon du cercle
	return distance <= RayonCercleRajoute;
}

// Centre
Point CercleRajoute::GetCentreCercleRajoute()
{
	return CentreCercleRajoute;
}
// Rayon
int CercleRajoute::GetRayonCercleRajoute()
{
	return RayonCercleRajoute;
}
// Couleur
Scalar CercleRajoute::GetCouleurCercleRajoute()
{
	return CouleurCercleRajoute;
}
// Epaisseur
int CercleRajoute::GetEpaisseurCercleRajoute()
{
	return EpaisseurCercleRajoute;
}
