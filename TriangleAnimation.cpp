#include "TriangleAnimation.h"

TriangleAnimation::TriangleAnimation()
{
	PointsTriangleAnimation[0] = Point(NULL, NULL);
	PointsTriangleAnimation[1] = Point(NULL, NULL);
	PointsTriangleAnimation[2] = Point(NULL, NULL);
	EpaisseurTriangleAnimation = NULL;
	DecalageXTriangleAnimation = NULL;
	DecalageYTriangleAnimation = NULL;
}

TriangleAnimation::TriangleAnimation(Point PointsTriangleAnimation1_, Point PointstriangleAnimation2_, Point PointstriangleAnimation3_, Scalar CouleurTriangleAnimation_, int EpaisseurTriangleAnimation_, int DecalageXtriangleAnimation_, int DecalageYtriangleAnimation_)
{
	PointsTriangleAnimation[0] = PointsTriangleAnimation1_;
	PointsTriangleAnimation[1] = PointstriangleAnimation2_;
	PointsTriangleAnimation[2] = PointstriangleAnimation3_;
	EpaisseurTriangleAnimation = EpaisseurTriangleAnimation_;
	DecalageXTriangleAnimation = DecalageXtriangleAnimation_;
	DecalageYTriangleAnimation = DecalageYtriangleAnimation_;

}
// 1er point
Point TriangleAnimation::GetPointTriangleAnimation1()
{
	return PointsTriangleAnimation[0];
}
// 2e point
Point TriangleAnimation::GetPointTriangleAnimation2()
{
	return PointsTriangleAnimation[1];
}
// 3e point
Point TriangleAnimation::GetPointTriangleAnimation3()
{
	return PointsTriangleAnimation[2];
}
// 4e point
Scalar TriangleAnimation::GetCouleurTriangleAnimation()
{
	return CouleurTriangleAnimation;
}
// 5e point
int TriangleAnimation::GetEpaisseurTriangleAnimation()
{
	return EpaisseurTriangleAnimation;
}
// Decalage Horizontal
int TriangleAnimation::GetDecalageXTriangleAnimation()
{
	return DecalageXTriangleAnimation;
}
// Decalage Vertical
int TriangleAnimation::GetDecalageYTriangleAnimation()
{
	return DecalageYTriangleAnimation;
}

void TriangleAnimation::dessiner(Mat& image)
{
	const Point* contours[1] = { PointsTriangleAnimation };
	int numPoints[] = { 3 };
	polylines(image, contours, numPoints, 1, true, CouleurTriangleAnimation, EpaisseurTriangleAnimation);
}

// Anime le triangle en le deplaçant selon les décalages spécifies
void TriangleAnimation::AnimationTriangleAnime()
{
	PointsTriangleAnimation[0] += Point(DecalageXTriangleAnimation, DecalageYTriangleAnimation);
	PointsTriangleAnimation[1] += Point(DecalageXTriangleAnimation, DecalageYTriangleAnimation);
	PointsTriangleAnimation[2] += Point(DecalageXTriangleAnimation, DecalageYTriangleAnimation);
	if (PointsTriangleAnimation[0].x <= 0 || PointsTriangleAnimation[2].x >= 1520)
		DecalageXTriangleAnimation = -DecalageXTriangleAnimation;
	if (PointsTriangleAnimation[0].y <= 0 || PointsTriangleAnimation[1].y >= 800)
		DecalageYTriangleAnimation = -DecalageYTriangleAnimation;
}

// Vérifie si un point (x, y) est à l'intérieur du triangle animé
bool TriangleAnimation::estpointinterieur(int x, int y) const
{
	int minX = min(min(PointsTriangleAnimation[0].x, PointsTriangleAnimation[1].x), PointsTriangleAnimation[2].x);
	int minY = min(min(PointsTriangleAnimation[0].y, PointsTriangleAnimation[1].y), PointsTriangleAnimation[2].y);
	int maxX = max(max(PointsTriangleAnimation[0].x, PointsTriangleAnimation[1].x), PointsTriangleAnimation[2].x);
	int maxY = max(max(PointsTriangleAnimation[0].y, PointsTriangleAnimation[1].y), PointsTriangleAnimation[2].y);
	return (x >= minX && x <= maxX && y >= minY && y <= maxY);
}
