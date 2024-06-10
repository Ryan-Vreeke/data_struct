#include "quad_tree.h"

template <typename T>
QuadTree<T>::QuadTree(Boundry _boundry) : boundry(_boundry) {}

template <typename T>
QuadTree<T>::QuadTree(float x, float y, int width, int height) : boundry(x, y, width, height) {}

template <typename T> QuadTree<T>::QuadTree(int w, int h) : boundry(0, 0, w, h) {}

template <typename T> QuadTree<T>::~QuadTree() {
  delete root;
  delete NE;
  delete NW;
  delete SE;
  delete SW;
}

template <typename T> void QuadTree<T>::insert(T element) {
  if (!boundry.contains(element.x, element.y))
    return;

  if (count < QuadTree::CAP) {
    elements.push_back(element);
    count++;
    return;
  }

  if (!divided()) {
    split();
  }

  NE->insert(element);
  NW->insert(element);
  SW->insert(element);
  SE->insert(element);
}

template <typename T> bool QuadTree<T>::divided() {
  return !(SE == nullptr && SW == nullptr && NE == nullptr && NW == nullptr);
}

template <typename T> void QuadTree<T>::split() {
  int new_w = boundry.w / 2;
  int new_h = boundry.h / 2;

  NE = new QuadTree<T>(boundry.x + (new_w / 2.0f), boundry.y + (new_h / 2.0f), new_w, new_h);
  SE = new QuadTree<T>(boundry.x + (new_w / 2.0f), boundry.y - (new_h / 2.0f), new_w, new_h);
  SW = new QuadTree<T>(boundry.x - (new_w / 2.0f), boundry.y - (new_h / 2.0f), new_w, new_h);
  NW = new QuadTree<T>(boundry.x - (new_w / 2.0f), boundry.y + (new_h / 2.0f), new_w, new_h);
}

template<typename T> std::vector<T> QuadTree<T>::get_elements(){
  return elements;
}

template<typename T> std::vector<QuadTree<T> *> QuadTree<T>::get_children(){
  std::vector<QuadTree<T> *> children = new std::vector<QuadTree<T> *>();
  children.push_back(NE);
  children.push_back(NW);
  children.push_back(SE);
  children.push_back(SW);

  return children;
}
