#pragma once
#include "Forme.h"
class CercleRajoute : public Forme
{
private:
	Point CentreCercleRajoute; // Centre du cercle
	int RayonCercleRajoute; // Rayon du cercle
	Scalar CouleurCercleRajoute; // Couleur du cercle 
	int EpaisseurCercleRajoute; // Epaisseur du trait du cercle

public:
	CercleRajoute(); // Constructeur
	CercleRajoute(Point CentreCercleRajoute_, int RayonCercleRajoute_, Scalar CouleurCercleRajoute_, int EpaisseurCercleRajoute_); // Avec paramètres
	
	// Methode pour dessiner le cercle sur une image
	void dessiner(Mat& image) override;
	
	// Methode pour verifier si le curseur est à l'interieur du cercle
	bool estpointinterieur(int x, int y) const override; 
	
	Point GetCentreCercleRajoute();
	int GetRayonCercleRajoute();
	Scalar GetCouleurCercleRajoute();
	int GetEpaisseurCercleRajoute();
};

