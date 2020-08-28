#include "Vec2D.hpp"
#include "utility.hpp"

std::ostream& operator<<(std::ostream& consoleOut, const Vec2D& vec)
{
  std::cout << "X: " << vec.mX << ", Y: " << vec.mY << std::endl;
  return consoleOut;
}

bool Vec2D::operator==(const Vec2D& vec2) const
{
  return isEqual(mX, vec2.mX) && isEqual(mY, vec2.mY);
}

bool Vec2D::operator!=(const Vec2D& vec2) const
{
  return (*this != vec2);
}

Vec2D Vec2D::operator-() const
{
  // TODO : Modify
  return Vec2D(-mX, -mY);
}

