#include "boundry.h"

Boundry::Boundry(float _x, float _y, float _w, float _h)
    : x(_x), y(_y), w(_w), h(_h) {}

Boundry::~Boundry() {}

bool Boundry::contains(float x, float y) {
  return !(x < this->x - (w / 2.0f) || x > this->x + (w / 2.0f) ||
           y < this->y - (h / 2.0f) || y > this->y + (h / 2.0f));
}
