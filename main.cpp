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

                           /* CREATION DE FORMES IMMOBILE */


    // Cr�ation d'un Cercle
    Circle Cercle1(Point(80, 80), 40, Scalar(255, 0, 0), -1);
    Matrice.ajouterForme(&Cercle1);

    // Cr�ation d'un 2�me Cercle
    Circle Cercle2(Point(150, 150), 40, Scalar(255, 255, 0), -1);
    Matrice.ajouterForme(&Cercle2);

    // Cr�ation d'un Rectangle
    Rectangle Rectangle1(Point(500, 120), Point(400, 40), Scalar(0, 255, 255), -1);
    Matrice.ajouterForme(&Rectangle1);

    // Cr�ation d'un Triangle
    Triangle Triangle1(Point(80, 80), Point(100, 120), Point(120, 100), Scalar(0, 0, 255), 8);
    Matrice.ajouterForme(&Triangle1);

    // Creation d'une Ligne droite
    LigneDroite LigneDroite1(Point(500, 600), Point(500, 500), Scalar(255, 255, 255), 2);
    Matrice.ajouterForme(&LigneDroite1);


                                /* CREATION DE FORMES ANIMEES */

    // Creation d'un Cercle anime
    CircleAnimation CercleAnimation1(Point(750, 700), 20, Scalar(120, 120, 120), -1, 1, 1);
    Matrice.ajouterForme(&CercleAnimation1);

    // Creation d'un Rectangle anime
    RectangleAnimation RectangleAnimation1(Point(320, 156), Point(220, 420), Scalar(145, 100, 30), -1, -2, -2);
    Matrice.ajouterForme(&RectangleAnimation1);

    // Creation d'une Ligne droite anim�
    LigneDroiteAnimation LigneDroiteAnimation1(Point(800, 850), Point(700, 700), Scalar(54, 86, 145), 7, 4, 2);
    Matrice.ajouterForme(&LigneDroiteAnimation1);

    // Creation d'un Triangle anime
    TriangleAnimation TriangleAnimation1(Point(80, 80), Point(100, 120), Point(120, 80), Scalar(250, 100, 30), 4, 4, -2);
    Matrice.ajouterForme(&TriangleAnimation1);



    while (true) {
        //  Lancement des animations des formes cr�es au d�but du main
        CercleAnimation1.AnimationCercleAnime();
        RectangleAnimation1.AnimationRectangleAnime();
        LigneDroiteAnimation1.AnimationTraitAnime();
        TriangleAnimation1.AnimationTriangleAnime();

        Matrice.getMatrice().setTo(Matrice.SetCouleurMatrice());

        Matrice.createWindow();
        setMouseCallback("Tableau", Dessins::CallBackFunc, static_cast<void*>(&Matrice));


        Matrice.dessinerFormes();
        Matrice.afficher();

        // Sortir de la boucle et donc arr�ter le programme d�s que le bouton ECHAP est presse
        if (waitKey(30) == 27)
            break;
    }

    destroyAllWindows();
    return 0;
}
