#include "Rectangle.h"

void Rectangle::dessiner(Mat& image)
{
	Point pointDepart(40, 40);
	Point pointArrivee(160, 100);
	Scalar couleurRectangle(0, 0, 255);
	int Úpaisseur = 2;
	rectangle(image, pointDepart, pointArrivee, couleurRectangle, Úpaisseur);
}
