// test.cpp
#include "../QuadTree/quad_tree.cpp"
#include <gtest/gtest.h>

typedef struct {
  float x;
  float y;
} point_t;

class QuadTreeTest : public ::testing::Test {
protected:
  // This function is called before each test is run
  void SetUp() override {
    quadTree = new QuadTree<point_t>( 100, 100); 
  }

  // This function is called after each test is run
  void TearDown() override {
    delete quadTree; 
  }

  QuadTree<point_t> *quadTree;
};

TEST_F(QuadTreeTest, InitTest) { 
  Boundry b = quadTree->boundry;
  EXPECT_EQ(b.w, 100); 
  EXPECT_EQ(b.h, 100); 
  EXPECT_EQ(b.x, 0); 
  EXPECT_EQ(b.y, 0); 
}

TEST_F(QuadTreeTest, InsertTest){
  quadTree->insert({1.0,1.0});
  EXPECT_FALSE(quadTree->divided());

  quadTree->insert({2.0,3.0});
  EXPECT_TRUE(quadTree->divided());
}

TEST_F(QuadTreeTest, DividedTest){
  quadTree->insert({1.0,1.0});
  quadTree->insert({-1.0,-1.0});

  std::vector<QuadTree<point_t> *> children = quadTree->get_children();

  EXPECT_EQ(quadTree->get_elements().size(), 2);
  EXPECT_EQ(children[1]->get_elements().size(), 1); //NW
  EXPECT_EQ(children[3]->get_elements().size(), 1); //SE
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
