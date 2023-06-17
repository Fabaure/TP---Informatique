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

// Centre
Point CircleAnimation::GetCentreCercleAnime()
{
	return CentreCercleAnimation;
}

// Rayon
int CircleAnimation::GetRayonCercleAnime()
{
	return RayonCercleAnimation;
}

// Couleur
Scalar CircleAnimation::GetCouleurCercleAnime()
{
	return CouleurCercleAnimation;
}

// Epaisseur
int CircleAnimation::GetEpaisseurCercleAnime()
{
	return EpaisseurCercleAnimation;
}

// Decalage Horizontal
int CircleAnimation::GetDecalageXCercleAnime()
{
	return DecalageXCercleAnimation;
}
// Decalage Vertical
int CircleAnimation::GetDecalageYCercleAnime()
{
	return DecalageYCercleAnimation;
}

// Anime le cercle en le depla�ant selon les d�calages sp�cifies
void CircleAnimation::AnimationCercleAnime()
{

	CentreCercleAnimation += Point(DecalageXCercleAnimation,DecalageYCercleAnimation);

	if (CentreCercleAnimation.x <= 0 || CentreCercleAnimation.x >= 1520)
		DecalageXCercleAnimation = -DecalageXCercleAnimation;
	if (CentreCercleAnimation.y <= 0 || CentreCercleAnimation.y >= 800)
		DecalageYCercleAnimation = -DecalageYCercleAnimation;
}

// V�rifie si un point (x, y) est � l'int�rieur du cercle anim�
bool CircleAnimation::estpointinterieur(int x, int y) const
{
	// Utilise la fonction estPointInterieur de la classe Circle
	double distance = sqrt(pow(x - CentreCercleAnimation.x, 2) + pow(y - CentreCercleAnimation.y, 2));
	return distance <= RayonCercleAnimation;
}
