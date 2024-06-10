#include "quad_tree.cpp"
#include <random>

typedef struct {
  float x;
  float y;
} point;

int main(int argc, char *argv[]) {
  static constexpr int N = 100;

  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> dis(0, 100);

  QuadTree<point> qt(100, 100);

  for (int n = 0; n < N; n++) {
    printf("added: %d\n", n);
    float x = dis(gen);
    float y = dis(gen);
  
    point p = {x,y};
    qt.insert(p);
  }

  for(auto a : qt.get_elements()){
    printf("%d", a.x);
  }

  return 0;
}
