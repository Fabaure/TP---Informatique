#include <iostream>
#include <opencv2/opencv.hpp>
#include "Dessins.h"
#include "Rectangle.h"
#include "Circle.h"
#include "RectangleAnimation.h"
#include "CircleAnimation.h"
#include "TriangleAnimation.h"
#include "LigneDroiteAnimation.h"

using namespace cv;
using namespace std;

int main() {

    Dessins Matrice(1520, 800, Scalar(160, 150, 74));

    // Création d'un triangle
    Triangle triangle1(Point(400, 48), Point(50, 64), Point(126, 851), Scalar(255, 0, 0), 4);
    Matrice.ajouterForme(&triangle1);

    // Création d'une ligne droite
    LigneDroite ligne(Point(500, 86), Point(69, 187), Scalar(0, 0, 255), 4);
    Matrice.ajouterForme(&ligne);


    while (true) {


        Matrice.getMatrice().setTo(Matrice.SetCouleurMatrice());

        Matrice.createWindow();
        setMouseCallback("Tableau", Dessins::CallBackFunc, static_cast<void*>(&Matrice));


        Matrice.dessinerFormes();
        Matrice.afficher();


        if (waitKey(30) == 27)
            break;
    }


    destroyAllWindows();
    return 0;
}
