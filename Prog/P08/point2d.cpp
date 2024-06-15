#include "Point2d.h"
#include <iostream>
#include <cmath>

void Point2d::translate(const Point2d &t)
{
  x += t.x;
  y += t.y;
}

double Point2d::distance_to(const Point2d &b) const
{
  double res;
  res = std::sqrt((x - b.x) * (x - b.x) + (y - b.y) * (y - b.y));
  return res;
}