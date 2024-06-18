#include "boundry.h"

Boundry::Boundry(float _x, float _y, int _w, int _h)
    : x(_x), y(_y), w(_w), h(_h) {}

Boundry::~Boundry() {}

bool Boundry::contains(int x, int y) {
  float hW = w / 2.0f;
  float hH = h / 2.0f;

  return !(x < this->x - hW || x > this->x + hW || y < this->y - hH || y > this->y + hH);
}

