#pragma once
#include "Forme.h"
class CercleRajoute : public Forme
{
private:
	Point CentreCercleRajoute;
	int RayonCercleRajoute;
	Scalar CouleurCercleRajoute;
	int EpaisseurCercleRajoute;

public:
	CercleRajoute();
	CercleRajoute(Point CentreCercleRajoute_, int RayonCercleRajoute_, Scalar CouleurCercleRajoute_, int EpaisseurCercleRajoute_);
	void dessiner(Mat& image) override;
	bool estpointinterieur(int x, int y) const override;
	Point GetCentreCercleRajoute();
	int GetRayonCercleRajoute();
	Scalar GetCouleurCercleRajoute();
	int GetEpaisseurCercleRajoute();
};

