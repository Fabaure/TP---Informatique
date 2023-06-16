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

Point TriangleAnimation::GetPointTriangleAnimation1()
{
	return PointsTriangleAnimation[0];
}

Point TriangleAnimation::GetPointTriangleAnimation2()
{
	return PointsTriangleAnimation[1];
}

Point TriangleAnimation::GetPointTriangleAnimation3()
{
	return PointsTriangleAnimation[2];
}

Scalar TriangleAnimation::GetCouleurTriangleAnimation()
{
	return CouleurTriangleAnimation;
}

int TriangleAnimation::GetEpaisseurTriangleAnimation()
{
	return EpaisseurTriangleAnimation;
}

int TriangleAnimation::GetDecalageXTriangleAnimation()
{
	return DecalageXTriangleAnimation;
}

int TriangleAnimation::GetDecalageYTriangleAnimation()
{
	return DecalageYTriangleAnimation;
}

void TriangleAnimation::dessiner(Mat& image)
{
	const cv::Point* contours[1] = { PointsTriangleAnimation };
	int numPoints[] = { 3 };
	cv::polylines(image, contours, numPoints, 1, true, CouleurTriangleAnimation, EpaisseurTriangleAnimation);
}

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

bool TriangleAnimation::estpointinterieur(int x, int y) const
{
	int minX = std::min(std::min(PointsTriangleAnimation[0].x, PointsTriangleAnimation[1].x), PointsTriangleAnimation[2].x);
	int minY = std::min(std::min(PointsTriangleAnimation[0].y, PointsTriangleAnimation[1].y), PointsTriangleAnimation[2].y);
	int maxX = std::max(std::max(PointsTriangleAnimation[0].x, PointsTriangleAnimation[1].x), PointsTriangleAnimation[2].x);
	int maxY = std::max(std::max(PointsTriangleAnimation[0].y, PointsTriangleAnimation[1].y), PointsTriangleAnimation[2].y);
	return (x >= minX && x <= maxX && y >= minY && y <= maxY);
}
