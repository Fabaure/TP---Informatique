#include "Dessins.h"
#include "Forme.h"

using namespace cv;

Dessins::Dessins(int width, int height) {
    image = Mat(height, width, CV_8UC3, Scalar(255, 255, 255));
}

void Dessins::ajouterForme(Forme* forme) {
    formes.push_back(forme);
}

void Dessins::supprimerForme(int index) {
    if (index >= 0 && index < formes.size()) {
        delete formes[index];
        formes.erase(formes.begin() + index);
    }
}

void Dessins::dessinerFormes() {
    for (Forme* forme : formes) {
        forme->dessiner(image);
    }
}

void Dessins::afficher() {
    namedWindow("Tableau", cv::WINDOW_AUTOSIZE);
    imshow("Tableau", image);
    waitKey(0);
    destroyWindow("Tableau");
}

void Dessins::sauvegarderDessin(const std::string& fichier) {
    imwrite(fichier, image);
}

void Dessins::lireDessin(const std::string& fichier) {
    image = imread(fichier);
}

Dessins::~Dessins() {
    for (Forme* forme : formes) {
        delete forme;
    }
    formes.clear();
}
