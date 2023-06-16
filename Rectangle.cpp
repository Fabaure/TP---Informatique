#include "Rectangle.h"

Rectangle::Rectangle()
{
	PointdebutRectangle = Point(NULL, NULL);
	PointfinRectangle = Point(NULL, NULL);
	CouleurRectangle = Scalar(NULL, NULL, NULL);
	epaisseurRectangle = NULL;
}

Rectangle::Rectangle(Point PointdebutRectangle_, Point PointfinRectangle_, Scalar CouleurRectangle_, int epaisseurRectangle_)
{
	PointdebutRectangle = PointdebutRectangle_;
	PointfinRectangle = PointfinRectangle_;
	CouleurRectangle = CouleurRectangle_;
	epaisseurRectangle = epaisseurRectangle_;
}

void Rectangle::dessiner(Mat& image)
{
	rectangle(image, PointdebutRectangle, PointfinRectangle, CouleurRectangle, epaisseurRectangle);
}

Point Rectangle::GetPointdebutRectangle()
{
	return PointdebutRectangle;
}

Point Rectangle::GetPointfinRectangle()
{
	return PointfinRectangle;
}

Scalar Rectangle::GetCouleurRectangle()
{
	return CouleurRectangle;
}

int Rectangle::GetEpaisseurRectangle()
{
	return epaisseurRectangle;
}
