#ifndef BOUNDRY_H_
#define BOUNDRY_H_

class Boundry {
public:
  int w;
  int h;
  float x;
  float y;

  Boundry(float _x, float _y, int _w, int _h);
  Boundry(Boundry &&) = default;
  Boundry(const Boundry &) = default;
  Boundry &operator=(Boundry &&) = default;
  Boundry &operator=(const Boundry &) = default;

  bool operator==(const Boundry &other) const {
    return (this->x == other.x && this->y == other.y);
  }

  ~Boundry();

  bool contains(int x, int y);
  bool contains(float x, float y);

private:
};

#endif
