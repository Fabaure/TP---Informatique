#include "RectangleAnimation.h"


RectangleAnimation::RectangleAnimation()
{
    PointdebutRectangleAnime = Point(NULL, NULL);
    PointfinRectangleAnime = Point(NULL, NULL);
    CouleurRectangleAnime = Scalar(NULL, NULL, NULL);
    EpaisseurRectangleAnime = NULL;
    DecalageXRectangleAnime = NULL;
    DecalageYRectangleAnime = NULL;
}

RectangleAnimation::RectangleAnimation(Point PointdebutRectangleAnime_, Point PointfinRectangleAnime_, Scalar CouleurRectangleAnime_, int epaisseurRectangleAnime_, int DecalageXRectangleAnime_, int DecalageYRectangleAnime_)
{
    PointdebutRectangleAnime = PointdebutRectangleAnime_;
    PointfinRectangleAnime = PointfinRectangleAnime_;
    CouleurRectangleAnime = CouleurRectangleAnime_;
    EpaisseurRectangleAnime = epaisseurRectangleAnime_;
    DecalageXRectangleAnime = DecalageXRectangleAnime_;
    DecalageYRectangleAnime = DecalageYRectangleAnime_;
}

void RectangleAnimation::dessiner(Mat& image)
{
        //Point PointfinXRectangle = PointdebutRectangleAnime + Point(DecalageXRectangleAnime, 0);
        //Point PointfinYRectangle = PointfinRectangleAnime + Point(0, DecalageYRectangleAnime);
        rectangle(image, PointdebutRectangleAnime, PointfinRectangleAnime, CouleurRectangleAnime, EpaisseurRectangleAnime);
        //int key = cv::waitKey();
        //if (key == 3) {
            //for (int compteurX = 0; compteurX < DecalageXRectangleAnime; compteurX++) {

               // if (PointfinRectangleAnime != PointfinXRectangle) {
                 //   PointdebutRectangleAnime = PointdebutRectangleAnime + Point(5, 0);
             //       PointfinRectangleAnime = PointfinRectangleAnime + Point(5, 0);
           //         rectangle(image, PointdebutRectangleAnime, PointfinRectangleAnime, CouleurRectangleAnime, EpaisseurRectangleAnime);

         //       }

        //    }
        //}
        //while (pass != 2) {
           // if (PointfinRectangleAnime != PointfinYRectangle) {
             //   PointdebutRectangleAnime = PointdebutRectangleAnime + Point(0, 1);
             //   PointfinRectangleAnime = PointfinRectangleAnime + Point(0, 1);
             //   rectangle(image, PointdebutRectangleAnime, PointfinRectangleAnime, CouleurRectangleAnime, EpaisseurRectangleAnime);
           // }
           // else {
              //  pass++;
           // }
      //  }
}

Point RectangleAnimation::GetPointdebutRectangleAnime()
{
    return PointdebutRectangleAnime;
}

Point RectangleAnimation::GetPointfinRcetangleAnime()
{
    return PointfinRectangleAnime;
}

Scalar RectangleAnimation::GetCouleurRectangleAnime()
{
    return CouleurRectangleAnime;
}

int RectangleAnimation::GetEpaisseurRectangleAnime()
{
    return EpaisseurRectangleAnime;
}

int RectangleAnimation::GetDecalageXRectangleAnime()
{
    return DecalageXRectangleAnime;
}

int RectangleAnimation::GetDecalageYRectangleAnime()
{
    return DecalageYRectangleAnime;
}

void RectangleAnimation::move()
{
    PointdebutRectangleAnime += Point (DecalageXRectangleAnime,0) ;
    PointfinRectangleAnime += Point(0,DecalageYRectangleAnime);
}
