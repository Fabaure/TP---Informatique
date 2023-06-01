#include "Circle.h"

void Circle::dessiner(Mat& image)
{
	Point centre(500, 500);
	int rayon = 30;
	Scalar couleurCercle(255, 0, 0);
	int épaisseur = 2;
	circle(image, centre, rayon, couleurCercle, épaisseur);
}
