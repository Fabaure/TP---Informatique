#pragma once
#include<iostream>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>
#include "Forme.h"

using namespace cv;
using namespace std;


class Circle : public Forme {
private:
	Point CentreCercle;   // Centre du cercle
	int RayonCercle;      // Rayon du cercle
	Scalar CouleurCercle; // Couleur du cercle
	int EpaisseurCercle;  // Epaisseur du trait du cercle

public:
	Circle(); // Constructeur
	Circle(Point CentreCercle_, int RayonCercle_, Scalar CouleurCercle_, int EpaisseurCercle_); // avec parametres
	Point GetCentreCercle();
	int GetRayonCercle();
	Scalar GetCouleurCercle();
	int GetEpaisseurCercle();

	// Methode pour dessiner le cercle sur une image
	void dessiner(Mat& image) override;

	// Methode pour verifier si le curseur est à l'intérieur du cercle
	bool estpointinterieur(int x, int y) const override;
};
