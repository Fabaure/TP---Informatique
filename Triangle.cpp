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
// 1er point
Point Triangle::GetPointTriangle1()
{
    return PointsTriangle[0];
}
// 2e point
Point Triangle::GetPointTriangle2()
{
    return PointsTriangle[1];
}
// 3e point
Point Triangle::GetPointTriangle3()
{
    return PointsTriangle[2];
}
// 4e point
Scalar Triangle::GetCouleurTriangle()
{
    return CouleurTriangle;
}
// 5e point
int Triangle::GetEpaisseurTriangle()
{
    return EpaisseurTriangle;
}

// Verifie si un point (x, y) est à l'intérieur du triangle
bool Triangle::estpointinterieur(int x, int y) const {
    

    // Vérification si le point est à l'intérieur du triangle en utilisant les coordonnées barycentriques
        

    int minX = min(min(PointsTriangle[0].x, PointsTriangle[1].x), PointsTriangle[2].x);
    int minY = min(min(PointsTriangle[0].y, PointsTriangle[1].y), PointsTriangle[2].y);
    int maxX = max(max(PointsTriangle[0].x, PointsTriangle[1].x), PointsTriangle[2].x);
    int maxY = max(max(PointsTriangle[0].y, PointsTriangle[1].y), PointsTriangle[2].y);
    return (x >= minX && x <= maxX && y >= minY && y <= maxY);
}