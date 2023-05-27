#pragma once
#include<iostream>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>

using namespace cv;
using namespace std;

int Rectangle() {
	Mat matriceBlanche(200, 200, CV_8UC3, Scalar(255, 255, 255)); // Déclaration d'une matrice blanche //
	Point pointDepart(40, 40); // Coordonnées du point de départ du rectangle (x,y) //
	Point pointArrivee(160, 100); // Coordonnées du point d'arrivée du rectangle //
	Scalar couleurRectangle(0, 0, 255); // Couleur du rectangle ( ici en bleu (RGB) ) //
	int épaisseur = 2; // Épaisseur de la ligne du rectangle //
	namedWindow("matriceBlanche"); // Déclaration d'une fenêtre pour afficher le rectangle //
	rectangle(matriceBlanche, pointDepart, pointArrivee, couleurRectangle, épaisseur); // Dessin du rectangle //
	imshow("matriceBlanche", matriceBlanche); // Affichage du rectangle //
	waitKey(0); // Attente d'une pression de touche
	return 0;
}
