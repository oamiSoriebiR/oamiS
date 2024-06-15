#include "Shape.h"
#include <cmath>

class Circle : public Shape
{
public:
  Circle(const point &center, double radius) : Shape(center), radius_(radius) {}
  double area() const override
  {
    return M_PI * radius_ * radius_;
  }
  double perimeter() const override
  {
    return 2 * M_PI * radius_;
  }
  bool contains(const point &p) const override
  {
    double distance = sqrt(pow(p.x - get_center().x, 2) + pow(p.y - get_center().y, 2));
    return distance <= radius_;
  }

private:
  double radius_;
};