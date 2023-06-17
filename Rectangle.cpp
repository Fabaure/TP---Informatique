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
// Point d�but
Point Rectangle::GetPointdebutRectangle()
{
	return PointdebutRectangle;
}
// Point d'arriv�
Point Rectangle::GetPointfinRectangle()
{
	return PointfinRectangle;
}
// Couleur
Scalar Rectangle::GetCouleurRectangle()
{
	return CouleurRectangle;
}
// Epaisseur
int Rectangle::GetEpaisseurRectangle()
{
	return epaisseurRectangle;
}

// Verifie si un point (x, y) est � l'int�rieur du du rectangle
bool Rectangle::estpointinterieur(int x, int y) const {
	// V�rification si le point est � l'int�rieur du rectangle
	return (x >= PointdebutRectangle.x && x <= PointfinRectangle.x && y >= PointdebutRectangle.y && y <= PointfinRectangle.y) || (x <= PointdebutRectangle.x && x >= PointfinRectangle.x && y <= PointdebutRectangle.y && y >= PointfinRectangle.y) || (x >= PointdebutRectangle.x && x <= PointfinRectangle.x && y <= PointdebutRectangle.y && y >= PointfinRectangle.y) || (x <= PointdebutRectangle.x && x >= PointfinRectangle.x && y >= PointdebutRectangle.y && y <= PointfinRectangle.y);
}
