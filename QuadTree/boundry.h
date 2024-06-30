#ifndef BOUNDRY_H_
#define BOUNDRY_H_

class Boundry {
public:
  float w;
  float h;
  float x;
  float y;

  Boundry(float _x, float _y, float _w, float _h);
  Boundry(Boundry &&) = default;
  Boundry(const Boundry &) = default;
  Boundry &operator=(Boundry &&) = default;
  Boundry &operator=(const Boundry &) = default;

  bool operator==(const Boundry &other) const {
    return (this->x == other.x && this->y == other.y);
  }

  ~Boundry();

  bool contains(float x, float y);

private:
};

#endif
