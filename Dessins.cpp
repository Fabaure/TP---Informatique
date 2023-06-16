#include "Dessins.h"
#include "Forme.h"
#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "LigneDroite.h"
#include "CircleAnimation.h"
#include "TriangleAnimation.h"
#include "RectangleAnimation.h"
#include "LigneDroiteAnimation.h"

using namespace cv;


Dessins::Dessins()
{
    width = NULL;
    height = NULL;
    CouleurMatrice = Scalar(NULL, NULL, NULL);
    NomFichierTexte = "\0";

}

Dessins::Dessins(int width_, int height_, Scalar CouleurMatrice_, string NomFichierTexte_) {
    height = height_;
    width = width_;
    CouleurMatrice = CouleurMatrice_;
    image = Mat(height, width, CV_8UC3, CouleurMatrice);
    NomFichierTexte = NomFichierTexte_;
}

void Dessins::ajouterForme(Forme* forme) {
    formes.push_back(forme);
    SauvegarderModification( NomFichierTexte , image, forme);
}


void Dessins::dessinerFormes() {
    for (Forme* forme : formes) {
        forme->dessiner(image);
    }
}

void Dessins::createWindow()
{
    namedWindow("Tableau", 1);
}

void Dessins::afficher() {
    //namedWindow("Tableau", cv::WINDOW_AUTOSIZE);
    imshow("Tableau", image);
    //waitKey(0);
    //destroyWindow("Tableau");
}

void Dessins::CallBackFunc(int event, int x, int y, int flags, void* userdata)
{
    Dessins* Matrice = static_cast<Dessins*>(userdata);
    if (event == EVENT_LBUTTONDOWN)
    {
        // Obtention de l'objet Matrice à partir de userdata
        Dessins* Matrice = static_cast<Dessins*>(userdata);

        Circle* ObjetPredetermine = new Circle(Point(x, y), 25, Scalar(255, 255, 0), -1);


        // Ajout de l'objet Circle à la Matrice
        Matrice->ajouterForme(ObjetPredetermine);
    }
    else if (event == EVENT_RBUTTONDOWN)
    {
        auto it = Matrice->formes.begin();
        while (it != Matrice->formes.end())
        {
            Forme* forme = *it;
            if (forme->estpointinterieur(x, y))
            {
                // Suppression de la forme si le bouton droit de la souris est enfoncé et le clic est effectué à l'intérieur de la forme
                delete forme;
                it = Matrice->formes.erase(it);
            }
            else
            {
                ++it;
            }
        }
    }
}

void Dessins::CreationFichier()
{
    std::ofstream file(NomFichierTexte);
}

void Dessins::SauvegarderModification(const std::string& NomFichierTexte, const cv::Mat& image, Forme* forme)
{
    std::ofstream file(NomFichierTexte, std::ios::app);
    if (!file.is_open()) {
        std::cerr << "Erreur lors de l'ouverture du fichier : " << NomFichierTexte << std::endl;
        return;
    }
    
    if (auto triangle = dynamic_cast<Triangle*>(forme)) {
        file << "Triangle" << "(";
        file << "Point1: (" << triangle->GetPointTriangle1().x << ", " << triangle->GetPointTriangle1().y << ")" << ", ";
        file << "Point2: (" << triangle->GetPointTriangle2().x << ", " << triangle->GetPointTriangle2().y << ")" << ", ";
        file << "Point3: (" << triangle->GetPointTriangle3().x << ", " << triangle->GetPointTriangle3().y << ")" << ", ";
        file << "Couleur : (" << triangle->GetCouleurTriangle().val[0] << "," << triangle->GetCouleurTriangle().val[1] << "," << triangle->GetCouleurTriangle().val[2] << ")" << ", ";
        file << "Epaisseur : " << triangle->GetEpaisseurTriangle() << ")" << endl << endl;

    }

    if (auto rectangle = dynamic_cast<Rectangle*>(forme)) {
        file << "Rectangle" << "(";
        file << "Point de début: (" << rectangle->GetPointdebutRectangle().x << ", " << rectangle->GetPointdebutRectangle().y << ")" << ", ";
        file << "Point de fin: (" << rectangle->GetPointfinRectangle().x << ", " << rectangle->GetPointfinRectangle().y << ")" << ", ";
        file << "Couleur : (" << rectangle->GetCouleurRectangle().val[0] << "," << rectangle->GetCouleurRectangle().val[1] << "," << rectangle->GetCouleurRectangle().val[2] << ")" << ", ";
        file << "Epaisseur : " << rectangle->GetEpaisseurRectangle() << ")" << endl << endl;
        
    }

    if (auto cercle = dynamic_cast<Circle*>(forme)) {
        file << "Cercle" << "(";
        file << "Centre: (" << cercle->GetCentreCercle().x << ", " << cercle->GetCentreCercle().y << ")" << ", ";
        file << "Rayon: " << cercle->GetRayonCercle() << ", ";
        file << "Couleur : (" << cercle->GetCouleurCercle().val[0] << "," << cercle->GetCouleurCercle().val[1] << "," << cercle->GetCouleurCercle().val[2] << ")" << ", ";
        file << "Epaisseur : " << cercle->GetEpaisseurCercle() << ")" << endl << endl;
    }

    if (auto lignedroite = dynamic_cast<LigneDroite*>(forme)) {
        file << "Ligne droite" << "(";
        file << "Point de début: (" << lignedroite->GetPointdebutTrait().x << ", " << lignedroite->GetPointdebutTrait().y << ")" << ", ";
        file << "Point de fin: (" << lignedroite->GetPointfinTrait().x << ", " << lignedroite->GetPointfinTrait().y << ")" << ", ";
        file << "Couleur : (" << lignedroite->GetCouleurTrait().val[0] << "," << lignedroite->GetCouleurTrait().val[1] << "," << lignedroite->GetCouleurTrait().val[2] << ")" << ", ";
        file << "Epaisseur : " << lignedroite->GetEpaisseurTrait() << ")" << endl << endl;
    }

    if (auto triangleanime = dynamic_cast<TriangleAnimation*>(forme)) {
        file << "Triangle animé" << "(";
        file << "Point1: (" << triangleanime->GetPointTriangleAnimation1().x << ", " << triangleanime->GetPointTriangleAnimation1().y << ")" << ", ";
        file << "Point2: (" << triangleanime->GetPointTriangleAnimation2().x << ", " << triangleanime->GetPointTriangleAnimation2().y << ")" << ", ";
        file << "Point3: (" << triangleanime->GetPointTriangleAnimation3().x << ", " << triangleanime->GetPointTriangleAnimation3().y << ")" << ", ";
        file << "Couleur : (" << triangleanime->GetCouleurTriangleAnimation().val[0] << "," << triangleanime->GetCouleurTriangleAnimation().val[1] << "," << triangleanime->GetCouleurTriangleAnimation().val[2] << ")" << ", ";
        file << "Epaisseur : " << triangleanime->GetEpaisseurTriangleAnimation() << ")" << endl;
        file << "se deplaçant a une vitesse de : " << triangleanime->GetDecalageXTriangleAnimation() << "pixels sur l'axe X, et " << triangleanime->GetDecalageYTriangleAnimation() << "pixels sur l'axe Y." << endl << endl;

    }

    if (auto rectangleanime = dynamic_cast<RectangleAnimation*>(forme)) {
        file << "Rectangle animé" << "(";
        file << "Point de début: (" << rectangleanime->GetPointdebutRectangleAnime().x << ", " << rectangleanime->GetPointdebutRectangleAnime().y << ")" << ", ";
        file << "Point de fin: (" << rectangleanime->GetPointfinRectangleAnime().x << ", " << rectangleanime->GetPointfinRectangleAnime().y << ")" << ", ";
        file << "Couleur : (" << rectangleanime->GetCouleurRectangleAnime().val[0] << "," << rectangleanime->GetCouleurRectangleAnime().val[1] << "," << rectangleanime->GetCouleurRectangleAnime().val[2] << ")" << ", ";
        file << "Epaisseur : " << rectangleanime->GetEpaisseurRectangleAnime() << ")" << endl;
        file << "se deplaçant a une vitesse de : " << rectangleanime->GetDecalageXRectangleAnime() << "pixels sur l'axe X, et " << rectangleanime->GetDecalageYRectangleAnime() << "pixels sur l'axe Y." << endl << endl;

    }

    if (auto cercleanime = dynamic_cast<CircleAnimation*>(forme)) {
        file << "Cercle animé" << "(";
        file << "Centre: (" << cercleanime->GetCentreCercleAnime().x << ", " << cercleanime->GetCentreCercleAnime().y << ")" << ", ";
        file << "Rayon: " << cercleanime->GetRayonCercleAnime() << ", ";
        file << "Couleur : (" << cercleanime->GetCouleurCercleAnime().val[0] << "," << cercleanime->GetCouleurCercleAnime().val[1] << "," << cercleanime->GetCouleurCercleAnime().val[2] << ")" << ", ";
        file << "Epaisseur : " << cercleanime->GetEpaisseurCercleAnime() << ")" << endl;
        file << "se deplaçant a une vitesse de : " << cercleanime->GetDecalageXCercleAnime() << "pixels sur l'axe X, et " << cercleanime->GetDecalageYCercleAnime() << "pixels sur l'axe Y." << endl << endl;

    }

    if (auto lignedroiteanime = dynamic_cast<LigneDroiteAnimation*>(forme)) {
        file << "Ligne droite animée" << "(";
        file << "Point de début: (" << lignedroiteanime->GetPointdebutTraitAnime().x << ", " << lignedroiteanime->GetPointdebutTraitAnime().y << ")" << ", ";
        file << "Point de fin: (" << lignedroiteanime->GetPointfinTraitAnime().x << ", " << lignedroiteanime->GetPointfinTraitAnime().y << ")" << ", ";
        file << "Couleur : (" << lignedroiteanime->GetCouleurTraitAnime().val[0] << "," << lignedroiteanime->GetCouleurTraitAnime().val[1] << "," << lignedroiteanime->GetCouleurTraitAnime().val[2] << ")" << ", ";
        file << "Epaisseur : " << lignedroiteanime->GetEpaisseurTraitAnime() << ")" << endl;
        file << "se deplaçant a une vitesse de : " << lignedroiteanime->GetDecalageXTraitAnime() << "pixels sur l'axe X, et " << lignedroiteanime->GetDecalageYTraitAnime() << "pixels sur l'axe Y." << endl << endl;

    }

    file.close();
}

void Dessins::sauvegarderDessin(const std::string& fichier) {
    imwrite(fichier, image);
}

void Dessins::lireDessin(const std::string& fichier) {
    image = imread(fichier);
}

Mat Dessins::getMatrice() const
{
    return image;
}

Scalar Dessins::SetCouleurMatrice() const
{
    return CouleurMatrice;
}


Dessins::~Dessins() {
    for (Forme* forme : formes) {
        delete forme;
    }
    formes.clear();
}
