#ifndef QUAD_TREE_H_
#define QUAD_TREE_H_

#include "boundry.h"
#include <vector>

template <typename T> class QuadTree {
public:
  QuadTree(int w, int h);
  QuadTree(Boundry _boundry);
  QuadTree(float x, float y, int width, int height);

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
  static constexpr int CAP = 1;

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
