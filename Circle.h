#pragma once
#include<iostream>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>
#include "Forme.h"

using namespace cv;
using namespace std;


class Circle : public Forme {
private:
	Point CentreCercle;
	int RayonCercle;
	Scalar CouleurCercle;
	int EpaisseurCercle;

public:
	Circle();
	Circle(Point CentreCercle_, int RayonCercle_, Scalar CouleurCercle_, int EpaisseurCercle_);
	Point GetCentreCercle();
	int GetRayonCercle();
	Scalar GetCouleurCercle();
	int GetEpaisseurCercle();
	void dessiner(Mat& image) override;
	bool estpointinterieur(int x, int y) const override;
};
