#pragma once
#ifndef FORME_H
#define FORME_H
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;

class Forme {
public:

    virtual void dessiner(Mat& image) = 0;                   // Methode virtuelle pure pour dessiner la forme sur une image
    virtual bool estpointinterieur(int x, int y) const = 0;  // Méthode virtuelle pure pour vérifier si un point est à l'intérieur de la forme
    virtual ~Forme() {}                                      // Destructeur virtuel

};

#endif
