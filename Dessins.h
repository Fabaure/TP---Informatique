#pragma once
#include "Triangle.h"
#include "LigneDroite.h"
#include "Forme.h"
#include <opencv2/opencv.hpp>
class Dessin {
private:
    std::vector<Forme*> formes;
    Mat image;

public:
    Dessin(int width, int height) {
        image = Mat(height, width, CV_8UC3, Scalar(255, 255, 255)); // Création de l'image blanche
    }

    void ajouterForme(Forme* forme) {
        formes.push_back(forme);
    }

    void dessinerFormes() {
        for (Forme* forme : formes) {
            forme->dessiner(image);
        }
    }

    void afficher() {
        namedWindow("Dessin", WINDOW_AUTOSIZE);
        imshow("Dessin", image);
        waitKey(0);
        destroyWindow("Dessin");
    }
};