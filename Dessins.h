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
    Scalar CouleurMatrice;
    int width;
    int height;

public:

    Dessins();
    Dessins(int width_, int height_, Scalar CouleurMatrice_);

    void ajouterForme(Forme* forme);
    void supprimerForme(Forme* forme);
    void dessinerFormes();
    void createWindow();
    void afficher();
    static void CallBackFunc(int event, int x, int y, int flags, void* userdata);
    void sauvegarderDessin(const string& fichier);
    void lireDessin(const string& fichier);
    Mat getMatrice() const;
    Scalar SetCouleurMatrice() const;

    ~Dessins(); // Ajout du destructeur
};


#endif 
