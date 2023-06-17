#pragma once
#include "Forme.h"

class LigneDroiteAnimation : public Forme
{
private:
    Point PointdebutTraitAnimation;    // Point de depart de la ligne droite animee
    Point PointfinTraitAnimation;      // Point d'arrivee de la ligne droite animee
    Scalar CouleurTraitAnimation;      // Couleur de la ligne droite animee 
    int EpaisseurTraitAnimation;       // Epaisseur de la ligne droite animee
    int DecalageXTraitAnimation;       // Decalage horizontal de la ligne droite animee
    int DecalageYTraitAnimation;       // Decalage vertical de la ligne droite animee

public:
    LigneDroiteAnimation();
    LigneDroiteAnimation(Point PointdebutTraitAnimation_, Point PointfinTraitAnimation_, Scalar CouleurTraitAnimation_, int EpaisseurTraitAnimation_, int DecalageXTraitAnimation_, int DecalageYTraitAnimation_);
    
    // Methode pour dessiner la ligne droite d'animation sur une image
    void dessiner(Mat& image) override;
    
    Point GetPointdebutTraitAnime();
    Point GetPointfinTraitAnime();
    Scalar GetCouleurTraitAnime();
    int GetEpaisseurTraitAnime();
    int GetDecalageXTraitAnime();
    int GetDecalageYTraitAnime();

    // Methode pour effectuer l'animation du cercle
    void AnimationTraitAnime();

    // Methode pour verifier si un point est à l'interieur du cercle d'animation
    bool estpointinterieur(int x, int y) const override;
};
