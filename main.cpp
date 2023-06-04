#include <iostream>
#include <opencv2/opencv.hpp>
#include "Dessins.h"
#include "Rectangle.h"
#include "Circle.h"
#include "RectangleAnimation.h"

using namespace cv;
using namespace std;

int main() {

    Dessins Matrice(2000, 800, Scalar(160,150,74));

    // Création d'un triangle
    Triangle triangle1(Point(400, 48), Point(50, 64), Point(126, 851), Scalar(255, 0, 0), 4);
    Matrice.ajouterForme(&triangle1);

    // Création d'une ligne droite
    LigneDroite ligne(Point(500, 86), Point(69, 187), Scalar(0, 0, 255), 4);
    Matrice.ajouterForme(&ligne);

    Circle cercle1(Point(500, 500), 56, Scalar(60, 60, 60), 9);
    Matrice.ajouterForme(&cercle1);

    Rectangle Rectangle1(Point(40, 420), Point(87, 430), Scalar(0, 255, 45), 2);
    Matrice.ajouterForme(&Rectangle1);

    RectangleAnimation RectangleAnime1(Point(400,48), Point(50,64), Scalar(75,75,75),2, 10,0);
    Matrice.ajouterForme(&RectangleAnime1);

    // Dessiner les formes
    Matrice.dessinerFormes();

    // Afficher le dessin
    Matrice.afficher();



    return 0;
}

