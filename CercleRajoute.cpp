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

void CercleRajoute::dessiner(Mat& image)
{
	circle(image, CentreCercleRajoute, RayonCercleRajoute, CouleurCercleRajoute, EpaisseurCercleRajoute);
}

bool CercleRajoute::estpointinterieur(int x, int y) const
{
	// Calcul de la distance entre le point (x, y) et le centre du cercle
	double distance = std::sqrt(std::pow(x - CentreCercleRajoute.x, 2) + std::pow(y - CentreCercleRajoute.y, 2));

	// Vérification si la distance est inférieure ou égale au rayon du cercle
	return distance <= RayonCercleRajoute;
}

Point CercleRajoute::GetCentreCercleRajoute()
{
	return CentreCercleRajoute;
}

int CercleRajoute::GetRayonCercleRajoute()
{
	return RayonCercleRajoute;
}

Scalar CercleRajoute::GetCouleurCercleRajoute()
{
	return CouleurCercleRajoute;
}

int CercleRajoute::GetEpaisseurCercleRajoute()
{
	return EpaisseurCercleRajoute;
}
