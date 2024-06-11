#ifndef QUAD_TREE_H_
#define QUAD_TREE_H_

#include "boundry.h"
#include <vector>

template <class T> class QuadTree {
public:
  QuadTree(int w, int h, int cap = 1);
  QuadTree(Boundry _boundry, int cap = 1);
  QuadTree(float x, float y, int width, int height, int cap = 1);

  QuadTree(QuadTree &&) = default;
  QuadTree(const QuadTree &) = default;
  QuadTree &operator=(QuadTree &&) = default;
  QuadTree &operator=(const QuadTree &) = default;
  ~QuadTree();

  void insert(T element);
  void split();
  std::vector<T> get_elements();
  std::vector<QuadTree<T> *> get_children();

private:
  const int CAP;

  Boundry boundry;
  QuadTree *root;

  QuadTree *NW = nullptr;
  QuadTree *NE = nullptr;
  QuadTree *SW = nullptr;
  QuadTree *SE = nullptr;

  std::vector<T> elements;
  int count = 0;

  bool divided();
};

#endif
