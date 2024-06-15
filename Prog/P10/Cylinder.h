#ifndef CYLINDER
#define CYLINDER

#include "Solid.h"
#include <cmath>

class Cylinder : public Solid
{
public:
  Cylinder(const point &c, double r, double h) : Solid(c), radius_(r), height_(h) {}
  double radius() const { return radius_; }
  double height() const { return height_; }
  double area() const override { return 2 * M_PI * radius_ * (radius_ + height_); }

private:
  double radius_;
  double height_;
};

#endif