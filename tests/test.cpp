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
  EXPECT_EQ(b.x, 50); 
  EXPECT_EQ(b.y, 50); 
}

TEST_F(QuadTreeTest, InsertTest){
  quadTree->insert({1.0,1.0});
  EXPECT_FALSE(quadTree->divided());

  quadTree->insert({2.0,3.0});
  EXPECT_TRUE(quadTree->divided());
}

TEST_F(QuadTreeTest, DividedTest){
  quadTree->insert({51,51});
  quadTree->insert({1,1});

  EXPECT_EQ(quadTree->get_elements().size(), 2);
  EXPECT_EQ(quadTree->NW->get_elements().size(), 0);
  EXPECT_EQ(quadTree->SE->get_elements().size(), 0);
  EXPECT_EQ(quadTree->SW->get_elements().size(), 1);
  EXPECT_EQ(quadTree->NE->get_elements().size(), 1);
}

TEST_F(QuadTreeTest, BoundryTest){
  quadTree->insert({51,51});
  quadTree->insert({1,1});

  EXPECT_EQ(quadTree->NE->boundry.x, 75); 
  EXPECT_EQ(quadTree->NW->boundry.x, 25); 
  EXPECT_EQ(quadTree->SE->boundry.x, 75); 
  EXPECT_EQ(quadTree->SW->boundry.x, 25); 
  //
  EXPECT_EQ(quadTree->NE->boundry.y, 75); 
  EXPECT_EQ(quadTree->NW->boundry.y, 75); 
  EXPECT_EQ(quadTree->SE->boundry.y, 25); 
  EXPECT_EQ(quadTree->SW->boundry.y, 25); 
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
