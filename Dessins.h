#pragma once
#ifndef DESSINS_H
#define DESSINS_H
#include <vector>
#include <string>
#include <opencv2/opencv.hpp>
#include "Forme.h"
#include "Triangle.h"
#include "LigneDroite.h"


using namespace cv;
using namespace std;

class Dessins {
private:
    vector<Forme*> formes;
    Mat image;

public:
    Dessins(int width, int height, Scalar CouleurMatrice);

    void ajouterForme(Forme* forme);
    void supprimerForme(int index);
    void dessinerFormes();
    void afficher();
    void sauvegarderDessin(const string& fichier);
    void lireDessin(const string& fichier);

    ~Dessins(); // Ajout du destructeur
};


#endif 
