#ifndef QUAD_TREE_H_
#define QUAD_TREE_H_

#include "boundry.h"
#include <vector>

template <class T> class QuadTree {
public:
  Boundry boundry;

  QuadTree(int w, int h, int cap = 1);
  QuadTree(float w, float h, int cap = 1);
  QuadTree(Boundry _boundry, int cap = 1);
  QuadTree(float x, float y, int width, int height, int cap = 1);

  QuadTree(QuadTree &&) = default;
  QuadTree(const QuadTree &) = default;
  QuadTree &operator=(QuadTree &&) = default;
  QuadTree &operator=(const QuadTree &) = default;
  ~QuadTree();

  void insert(T element);
  void split();
  bool divided();
  std::vector<T> find(float x, float y);  

  std::vector<T> get_elements();
  std::vector<QuadTree<T> *> get_children();

  QuadTree *NW = nullptr;
  QuadTree *NE = nullptr;
  QuadTree *SW = nullptr;
  QuadTree *SE = nullptr;

private:
  const unsigned int CAP;

  std::vector<T> elements;
};

#endif
