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

    Dessins Matrice(1520, 800, Scalar(160,150,74), "FichierTest.txt");

    Matrice.CreationFichier();
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

    RectangleAnimation RectangleAnime1(Point(50,50), Point(400,400), Scalar(75,75,75),-1, 10,0);
    Matrice.ajouterForme(&RectangleAnime1);

    CircleAnimation CercleAnime1(Point(150, 150), 20, Scalar(255, 0, 255), 3, 5,20);
    Matrice.ajouterForme(&CercleAnime1);

    LigneDroiteAnimation LigneAnime1(Point(200, 450), Point(105, 560), Scalar(124, 48, 200), 2, 4, 7);
    Matrice.ajouterForme(&LigneAnime1);

    TriangleAnimation TriangleAnime1(Point(40, 40), Point(40, 90), Point(75, 65), Scalar(0, 255, 255), 3, 10,10);
    Matrice.ajouterForme(&TriangleAnime1);


    
    while (true) {

        
        CercleAnime1.AnimationCercleAnime();
        RectangleAnime1.AnimationRectangleAnime();
        TriangleAnime1.AnimationTriangleAnime();
        LigneAnime1.AnimationTraitAnime();

        Matrice.getMatrice().setTo(Matrice.SetCouleurMatrice());
        
        Matrice.createWindow();
        setMouseCallback("Tableau", Dessins::CallBackFunc, &Matrice);

        Matrice.dessinerFormes();
        Matrice.afficher();


        if (waitKey(30) == 27)
            break;
    }

    destroyAllWindows();
    return 0;
}

