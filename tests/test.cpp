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

TEST(BoundryTest, contains){
  Boundry b{0,0,50, 50};

  EXPECT_TRUE(b.contains(1,1));
  EXPECT_TRUE(b.contains(-1,-1));
  EXPECT_FALSE(b.contains(33,44));

  Boundry b1{25,25,50, 50};
  EXPECT_TRUE(b1.contains(1,1));
  EXPECT_FALSE(b1.contains(-1,-1));
  EXPECT_TRUE(b1.contains(33,44));
}

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
  quadTree->insert({-1.0f,-1.0f});

  EXPECT_EQ(quadTree->get_elements().size(), 2);
  EXPECT_EQ(quadTree->NE->get_elements().size(), 1);
  EXPECT_EQ(quadTree->NW->get_elements().size(), 0);
  EXPECT_EQ(quadTree->SE->get_elements().size(), 0);
  EXPECT_EQ(quadTree->SW->get_elements().size(), 1);
}

TEST_F(QuadTreeTest, BoundryTest){
  quadTree->insert({49, 49});
  quadTree->insert({1,1});

  EXPECT_EQ(quadTree->NE->boundry.x, 25); 
  EXPECT_EQ(quadTree->NW->boundry.x, -25); 
  EXPECT_EQ(quadTree->SE->boundry.x, 25); 
  EXPECT_EQ(quadTree->SW->boundry.x, -25); 
  //
  EXPECT_EQ(quadTree->NE->boundry.y, 25); 
  EXPECT_EQ(quadTree->NW->boundry.y, 25); 
  EXPECT_EQ(quadTree->SE->boundry.y, -25); 
  EXPECT_EQ(quadTree->SW->boundry.y, -25); 
}

TEST(BoundryName, FloatBoundries){
  QuadTree<point_t> qt{1.0f, 1.0f};
  Boundry b = qt.boundry;

  EXPECT_EQ(b.x, 0.0f);

  qt.insert({0.1f, 0.1f});
  qt.insert({-0.25f, -0.25f});

  auto nw = qt.NW;
  auto ne = qt.NE;

  EXPECT_EQ(nw->boundry.x, -0.25f);
  EXPECT_EQ(nw->boundry.y, 0.25f);
  EXPECT_EQ(ne->boundry.x, 0.25f);
}

TEST_F(QuadTreeTest, SimpleFindTest){
  quadTree->insert({1.0f, 1.0f});
  std::vector<point_t> points = quadTree->find(25.0f, 25.0f);

  EXPECT_EQ(points.size(), 1);
}

TEST_F(QuadTreeTest, FindTest){
  quadTree->insert({1.0f, 1.0f});
  quadTree->insert({-1.0f, -1.0f});


  std::vector<point_t> points = quadTree->find(25.0f, 25.0f);

  EXPECT_EQ(points.size(), 1);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
