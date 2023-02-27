#pragma once

#include "olcPixelGameEngine.h"
#include "utils.hpp"
#include "shape.hpp"

class Rectangle:public Shape {
public:
	int width;
	int height;

	Rectangle(olc::PixelGameEngine* pge, olc::vf2d pos, olc::vf2d dir, int speed, int width, int height);

	void draw();
	virtual void move();
};