#include <iostream>
#include <opencv2/opencv.hpp>
#include "Dessins.h"
#include "Rectangle.h"
#include "Circle.h"

using namespace cv;
using namespace std;

int main() {
    int width = 800;
    int height = 600;

    Dessins dessin(width, height);

    // Création d'un triangle
    Triangle* triangle = new Triangle();
    dessin.ajouterForme(triangle);

    // Création d'une ligne droite
    LigneDroite* ligne = new LigneDroite();
    dessin.ajouterForme(ligne);

    // Dessiner les formes
    dessin.dessinerFormes();

    // Afficher le dessin
    dessin.afficher();

    delete triangle;
    delete ligne;
    
    Rectangle();
    Cercle();

    return 0;
}

