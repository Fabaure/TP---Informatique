#include "Dessins.h"
#include "Forme.h"
#include "Circle.h"

using namespace cv;


Dessins::Dessins()
{
    width = NULL;
    height = NULL;
    CouleurMatrice = Scalar(NULL, NULL, NULL);

}

Dessins::Dessins(int width_, int height_, Scalar CouleurMatrice_) {
    height = height_;
    width = width_;
    CouleurMatrice = CouleurMatrice_;
    image = Mat(height, width, CV_8UC3, CouleurMatrice);
}

void Dessins::ajouterForme(Forme* forme) {
    formes.push_back(forme);
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
