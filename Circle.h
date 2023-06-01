#pragma once
#include<iostream>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>
#include "Forme.h"

using namespace cv;
using namespace std;


class Circle : public Forme {
public:
	void dessiner(Mat& image) override;
};
