#pragma once
#include "Forme.h"
#include "Circle.h"

class CircleAnimation : public Forme
{
private:
	Point CentreCercleAnimation;   // Centre du cercle d'animation
	int RayonCercleAnimation;      // Rayon du cercle d'animation
	Scalar CouleurCercleAnimation; // Couleur du cercle d'animation
	int EpaisseurCercleAnimation;  // Epaisseur du trait du cercle d'animation
	int DecalageXCercleAnimation;  // Decalage horizontal du cercle d'animation
	int DecalageYCercleAnimation;  // Decalage vertical du cercle d'animation

public:
	CircleAnimation();
	CircleAnimation(Point CentreCercleAnimation_, int RayonCercleAnimation_, Scalar CouleurCercleAnimation_, int EpaisseurCercleAnimation_, int DecalageXCercleAnimation_, int DecalageYCercleAnimation_);
	
	// Methode pour dessiner le cercle d'animation sur une image
	void dessiner(Mat& image) override;

	Point GetCentreCercleAnime();
	int GetRayonCercleAnime();
	Scalar GetCouleurCercleAnime();
	int GetEpaisseurCercleAnime();
	int GetDecalageXCercleAnime();
	int GetDecalageYCercleAnime();
	
	// Methode pour effectuer l'animation du cercle
	void AnimationCercleAnime();

	// Methode pour verifier si un point est à l'interieur du cercle d'animation
	bool estpointinterieur(int x, int y) const override;
};

