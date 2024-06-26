#include "quad_tree.h"
#include <vector>

template <class T>
QuadTree<T>::QuadTree(Boundry _boundry, int cap)
    : boundry(_boundry), CAP(cap) {}

template <class T>
QuadTree<T>::QuadTree(float x, float y, int width, int height, int cap)
    : boundry(x, y, width, height), CAP(cap) {}

template <class T>
QuadTree<T>::QuadTree(int w, int h, int cap) : boundry(0, 0, w, h), CAP(cap) {}

template <class T> QuadTree<T>::~QuadTree() {
  delete NE;
  delete NW;
  delete SE;
  delete SW;
}

template <class T> void QuadTree<T>::insert(T element) {
  if (!boundry.contains(element.x, element.y))
    return;

  if (elements.size() < CAP) {
    elements.push_back(element);

  } else {
    if (!divided()) {
      split();
    }

    NE->insert(element);
    NW->insert(element);
    SW->insert(element);
    SE->insert(element);
  }
}

template <class T> bool QuadTree<T>::divided() {
  return !(SE == nullptr && SW == nullptr && NE == nullptr && NW == nullptr);
}

template <class T> void QuadTree<T>::split() {
  int new_w = boundry.w / 2;
  int new_h = boundry.h / 2;

  NE = new QuadTree<T>(boundry.x + (new_w / 2.0f), boundry.y + (new_h / 2.0f),
                       new_w, new_h);
  SE = new QuadTree<T>(boundry.x + (new_w / 2.0f), boundry.y - (new_h / 2.0f),
                       new_w, new_h);
  SW = new QuadTree<T>(boundry.x - (new_w / 2.0f), boundry.y - (new_h / 2.0f),
                       new_w, new_h);
  NW = new QuadTree<T>(boundry.x - (new_w / 2.0f), boundry.y + (new_h / 2.0f),
                       new_w, new_h);

  for (auto element : elements) {
    NE->insert(element);
    NW->insert(element);
    SW->insert(element);
    SE->insert(element);
  }
}

template <class T> std::vector<T> QuadTree<T>::get_elements() {
  return elements;
}

template <class T> std::vector<QuadTree<T> *> QuadTree<T>::get_children() {
  std::vector<QuadTree<T> *> children;

  children.push_back(NE);
  children.push_back(NW);
  children.push_back(SE);
  children.push_back(SW);

  return children;
}
