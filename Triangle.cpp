#include "Triangle.h"

void Triangle::dessiner(cv::Mat& image) {
    const cv::Point* contours[1] = { PointsTriangle };
    int numPoints[] = { 3 };
    cv::polylines(image, contours, numPoints, 1, true, CouleurTriangle, EpaisseurTriangle);
}

Triangle::Triangle()
{
    PointsTriangle[0] = Point(NULL, NULL);
    PointsTriangle[1] = Point(NULL, NULL);
    PointsTriangle[2] = Point(NULL, NULL);
    CouleurTriangle = Scalar(NULL, NULL, NULL);
    EpaisseurTriangle = NULL;
}

Triangle::Triangle(Point PointTriangle1_, Point PointTriangle2_, Point PointTriangle3_, Scalar CouleurTriangle_, int EpaisseurTriangle_)
{
    PointsTriangle[0] = PointTriangle1_;
    PointsTriangle[1] = PointTriangle2_;
    PointsTriangle[2] = PointTriangle3_;
    CouleurTriangle = CouleurTriangle_;
    EpaisseurTriangle = EpaisseurTriangle_;

}

Point Triangle::GetPointTriangle1()
{
    return PointsTriangle[0];
}

Point Triangle::GetPointTriangle2()
{
    return PointsTriangle[1];
}

Point Triangle::GetPointTriangle3()
{
    return PointsTriangle[2];
}

Scalar Triangle::GetCouleurTriangle()
{
    return CouleurTriangle;
}

int Triangle::GetEpaisseurTriangle()
{
    return EpaisseurTriangle;
}

bool Triangle::estpointinterieur(int x, int y) const {
    Point p(x, y);

    // Vérification si le point est à l'intérieur du triangle en utilisant les coordonnées barycentriques
    double alpha = ((PointsTriangle[1].y - PointsTriangle[2].y) * (p.x - PointsTriangle[2].x) + (PointsTriangle[2].x - PointsTriangle[1].x) * (p.y - PointsTriangle[2].y)) /
        ((PointsTriangle[1].y - PointsTriangle[2].y) * (PointsTriangle[0].x - PointsTriangle[2].x) + (PointsTriangle[2].x - PointsTriangle[1].x) * (PointsTriangle[0].y - PointsTriangle[2].y));

    double beta = ((PointsTriangle[2].y - PointsTriangle[0].y) * (p.x - PointsTriangle[2].x) + (PointsTriangle[0].x - PointsTriangle[2].x) * (p.y - PointsTriangle[2].y)) /
        ((PointsTriangle[1].y - PointsTriangle[2].y) * (PointsTriangle[0].x - PointsTriangle[2].x) + (PointsTriangle[2].x - PointsTriangle[1].x) * (PointsTriangle[0].y - PointsTriangle[2].y));

    double gamma = 1.0 - alpha - beta;

    return alpha > 0 && beta > 0 && gamma > 0;
}