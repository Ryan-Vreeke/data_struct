#include "../QuadTree/quad_tree.cpp"
#include <cstdio>
#include <iostream>

typedef struct {
  float x;
  float y;
} point_t;

int main(int argc, char *argv[]) {
  QuadTree<point_t> qt{100, 100};

  qt.insert({1.0, 1.0});
  qt.insert({-1.0f, -1.0f});

  qt.NE->get_elements();

  return 0;
}
