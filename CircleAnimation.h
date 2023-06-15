#pragma once
#include "Forme.h"
#include "Circle.h"

class CircleAnimation : public Forme
{
private:
	Point CentreCercleAnimation;
	int RayonCercleAnimation;
	Scalar CouleurCercleAnimation;
	int EpaisseurCercleAnimation;
	int DecalageXCercleAnimation;
	int DecalageYCercleAnimation;

public:
	CircleAnimation();
	CircleAnimation(Point CentreCercleAnimation_, int RayonCercleAnimation_, Scalar CouleurCercleAnimation_, int EpaisseurCercleAnimation_, int DecalageXCercleAnimation_, int DecalageYCercleAnimation_);
	void dessiner(Mat& image) override;
	Point GetCentreCercleAnime();
	Scalar GetCouleurCercleAnime();
	int GetEpaisseurCercleAnime();
	int GetDecalageXCercleAnime();
	int GetDecalageYCercleAnime();
	void AnimationCercleAnime();
	bool estpointinterieur(int x, int y) const override;
	bool estCercleAnime(int x, int y) const;
};

