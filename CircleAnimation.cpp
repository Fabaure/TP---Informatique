#include "CircleAnimation.h"

CircleAnimation::CircleAnimation()
{
	CentreCercleAnimation = Point(NULL,NULL);
	RayonCercleAnimation = NULL;
	CouleurCercleAnimation = Scalar(NULL, NULL, NULL);
	EpaisseurCercleAnimation = NULL;
	DecalageXCercleAnimation = NULL;
	DecalageYCercleAnimation = NULL;
}

CircleAnimation::CircleAnimation(Point CentreCercleAnimation_, int RayonCercleAnimation_, Scalar CouleurCercleAnimation_, int EpaisseurCercleAnimation_, int DecalageXCercleAnimation_, int DecalageYCercleAnimation_)
{
	CentreCercleAnimation = CentreCercleAnimation_;
	RayonCercleAnimation = RayonCercleAnimation_;
	CouleurCercleAnimation = CouleurCercleAnimation_;
	EpaisseurCercleAnimation = EpaisseurCercleAnimation_;
	DecalageXCercleAnimation = DecalageXCercleAnimation_;
	DecalageYCercleAnimation = DecalageYCercleAnimation_;
}

void CircleAnimation::dessiner(Mat& image)
{
	circle(image, CentreCercleAnimation, RayonCercleAnimation, CouleurCercleAnimation, EpaisseurCercleAnimation);
}

Point CircleAnimation::GetCentreCercleAnime()
{
	return CentreCercleAnimation;
}

Scalar CircleAnimation::GetCouleurCercleAnime()
{
	return CouleurCercleAnimation;
}

int CircleAnimation::GetEpaisseurCercleAnime()
{
	return EpaisseurCercleAnimation;
}

int CircleAnimation::GetDecalageXCercleAnime()
{
	return DecalageXCercleAnimation;
}

int CircleAnimation::GetDecalageYCercleAnime()
{
	return DecalageYCercleAnimation;
}

void CircleAnimation::AnimationCercleAnime()
{
	CentreCercleAnimation += Point(DecalageXCercleAnimation,DecalageYCercleAnimation);
	if (CentreCercleAnimation.x <= 0 || CentreCercleAnimation.x >= 1520)
		DecalageXCercleAnimation = -DecalageXCercleAnimation;
	if (CentreCercleAnimation.y <= 0 || CentreCercleAnimation.y >= 800)
		DecalageYCercleAnimation = -DecalageYCercleAnimation;
}

