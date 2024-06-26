#include "../QuadTree/quad_tree.cpp"
#include <cstdio>
#include <iostream>

typedef struct {
  float x;
  float y;
} point_t;

int main(int argc, char *argv[]) {
  QuadTree<point_t> qt{100, 100};

  qt.insert({49,49});
  qt.insert({1,1});

  QuadTree<point_t> *ne = qt.NE;

  std::cout << ne->boundry.x << std::endl;
  return 0;
}
