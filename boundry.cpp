#include "boundry.h"

Boundry::Boundry(float _x, float _y, int _w, int _h)
    : x(_x), y(_y), w(_w), h(_h) {}

Boundry::~Boundry() {}

bool Boundry::contains(int x, int y) {
  if (x < this->x - w || x > this->x + w || y < this->y - h || y > this->y + h)
    return false;

  return true;
}

bool Boundry::contains(float x, float y) {
  if (x < this->x - w || x > this->x + w || y < this->y - h || y > this->y + h)
    return false;

  return true;
}
