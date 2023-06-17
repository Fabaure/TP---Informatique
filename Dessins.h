#pragma once
#ifndef DESSINS_H
#define DESSINS_H
#include <vector>
#include <string>
#include <opencv2/opencv.hpp>
#include <fstream>
#include "Forme.h"
#include "Triangle.h"
#include "LigneDroite.h"


using namespace cv;
using namespace std;

class Dessins {
private:
    vector<Forme*> formes;  // Vecteur de pointeurs vers des formes
    Mat image;              // Matrice de l'image
    Scalar CouleurMatrice;  // Couleur de la matrice
    int width;              // Largeur de l'image
    int height;             // Hauteur de l'image
    string NomFichierTexte; // Nom du fichier texte

public:

    Dessins();
    Dessins(int width_, int height_, Scalar CouleurMatrice_, string NomFichierTexte_);

    void ajouterForme(Forme* forme);     // Methode pour ajouter une forme au vecteur
    void dessinerFormes();               // Methode pour dessiner toutes les formes sur l'image
    void createWindow();                 // Methode pour creer une fenetre d'affichage
    void afficher();                     // Methode pour afficher l'image dans la fenêtre

    static void CallBackFunc(int event, int x, int y, int flags, void* userdata);  // Fonction de rappel pour la gestion des evenement de la souris ( Clic droit / Clic gauche )
    void CreationFichier();                                                        // Methode pour creer un fichier texte

    void SauvegarderModificationCreation(const std::string& NomFichierTexte, const Mat& image, Forme* forme);          // Methode pour sauvegarder les modifications lors de la creation d'une forme
    static void SauvegarderModificationSupprimer(const std::string& NomFichierTexte, const Mat& image, Forme* forme);  // Methode pour sauvegarder les modifictions lors de la suppression d'une forme
    
    string GetNomFichierTexte();   // Methode pour obtenir le nom du fichier texte
    Mat GetImage();                // Methode pour obtenir l'image


    void sauvegarderDessin(const string& fichier); // Methode pour sauvegarder le dessin dans un fichier
    void lireDessin(const string& fichier);        // Methode pour lire un dessin à partir d'un fichier
    Mat getMatrice() const;                        // Methode pour obtenir la matrice de l'image
    Scalar SetCouleurMatrice() const;              // Methode pour definir la couleur de la matrice

    ~Dessins(); // Ajout du destructeur
};


#endif 
