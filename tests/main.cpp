#include "../QuadTree/quad_tree.cpp"
#include <cstdio>
#include <iostream>

typedef struct {
  float x;
  float y;
} point_t;

int main(int argc, char *argv[]) {
  QuadTree<point_t> qt{100, 100};


  qt.insert({1.0f, 1.0f});
  qt.insert({-1.0f, -1.0f});


  std::vector<point_t> points = qt.find(25.0f, 25.0f);
  printf("25, 25: %d\n", points.size());

  points = qt.find(-25.0f, -25.0f);
  printf("-25, -25: %d\n", points.size());


  return 0;
}
