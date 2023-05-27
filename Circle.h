#pragma once
#include<iostream>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>

using namespace cv;
using namespace std;

int Cercle() {
	Mat matriceBlanche(20000, 20000, CV_8UC3, Scalar(255, 255, 255));// D�claration d'une matrice blanche //
	Point centre(500, 500);// Point de d�part du cercle (x,y)
	int rayon = 30;// Rayon du cercle
	Scalar couleurCercle(255, 0, 0);// Couleur du cercle ( ici en rouge (RGB) )
	int �paisseur = 2;// �paisseur du cercle
	namedWindow("ImageGrise");// D�claration d'une fen�tre pour afficher le cercle
	circle(matriceBlanche, centre, rayon, couleurCercle, �paisseur); // Utilisation de la fonction circle() pour dessiner le cercle
	imshow("ImageGrise", matriceBlanche);// Affichage du cercle
	waitKey(0);// Attente d'une pression de touche
	return 0;

}
