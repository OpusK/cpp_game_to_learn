#pragma once

#include <iostream>

class Vec2D
{
public:
  static const Vec2D Zero;

  Vec2D():Vec2D(0, 0){}
  Vec2D(float x, float y):mX(x), mY(y){}

  inline void SetX(float x) { mX = x; }
  inline void SetY(float y) { mY = y; }
  inline float GetX() const { return mX; }
  inline float GetY() const { return mY; }

  friend std::ostream& operator<<(std::ostream &consoleOut, const Vec2D &vec);

  bool operator==(const Vec2D& vec2) const;
  bool operator!=(const Vec2D& vec2) const;

  Vec2D operator-() const;
  Vec2D operator*(float scale) const;
  friend Vec2D operator*(float scalar, const Vec2D& vec);
  Vec2D operator/(float scale) const;
  Vec2D& operator*=(float scale);
  Vec2D& operator/=(float scale);

  Vec2D operator+(const Vec2D& vec) const;
  Vec2D operator-(const Vec2D& vec) const;
  Vec2D& operator+=(const Vec2D& vec);
  Vec2D& operator-=(const Vec2D& vec);

  float MagnitudeSquared() const;
  float Magnitude() const;

  Vec2D GetUnitVec() const;
  Vec2D& Normalize();

private:
  float mX, mY;
};
