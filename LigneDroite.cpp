#include "LigneDroite.h"

using namespace cv;

void LigneDroite::dessiner(Mat& image) {
    line(image, Point(300, 100), Point(500, 200), Scalar(0, 255, 0), 2);
}
