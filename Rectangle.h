#pragma once
#include<iostream>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>

using namespace cv;
using namespace std;

int Rectangle() {
	Mat matriceBlanche(200, 200, CV_8UC3, Scalar(255, 255, 255)); // D�claration d'une matrice blanche //
	Point pointDepart(40, 40); // Coordonn�es du point de d�part du rectangle (x,y) //
	Point pointArrivee(160, 100); // Coordonn�es du point d'arriv�e du rectangle //
	Scalar couleurRectangle(0, 0, 255); // Couleur du rectangle ( ici en bleu (RGB) ) //
	int �paisseur = 2; // �paisseur de la ligne du rectangle //
	namedWindow("matriceBlanche"); // D�claration d'une fen�tre pour afficher le rectangle //
	rectangle(matriceBlanche, pointDepart, pointArrivee, couleurRectangle, �paisseur); // Dessin du rectangle //
	imshow("matriceBlanche", matriceBlanche); // Affichage du rectangle //
	waitKey(0); // Attente d'une pression de touche
	return 0;
}
