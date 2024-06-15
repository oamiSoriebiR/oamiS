#include "Shape.h"

class Rectangle : public Shape
{
public:
  Rectangle(const point &center, double width, double height)
      : Shape(center), width_(width), height_(height) {}

  double area() const override
  {
    return width_ * height_;
  }

  double perimeter() const override
  {
    return 2 * (width_ + height_);
  }

  bool contains(const point &p) const override
  {
    double left = get_center().x - width_ / 2;
    double right = get_center().x + width_ / 2;
    double top = get_center().y + height_ / 2;
    double bottom = get_center().y - height_ / 2;

    return p.x >= left && p.x <= right && p.y >= bottom && p.y <= top;
  }

private:
  double width_;
  double height_;
};
