#include "gmock/gmock.h"
#include "gtest/gtest.h"

extern "C" {
    #include "lib/RuleofSarrus.h"
}


TEST(RuleofSarrus_test, test1) 
{
  float mat[][3] = { {1.0, 2.0, 3.0}, 
                    {2.0, 5.0, 6.0}, 
                    {2.0, 5.0, 8.0} 
                  };
  EXPECT_FLOAT_EQ( RuleofSarrus(mat), 2.0);
}

TEST(RuleofSarrus_test, test2) 
{
  float mat[][3] = { {2.0, 3.0, 1.0}, 
                    {1.0, 2.0, 4.0}, 
                    {0.0, 5.0, 1.0} 
                  };
  EXPECT_FLOAT_EQ( RuleofSarrus(mat), -34.0);
}

TEST(RuleofSarrus_test, test3) 
{
  float mat[][3] = { {2.0, 1.0, 1.0}, 
                    {3.0, 1.0, 2.0}, 
                    {1.0, -1.0, 0.0} 
                  };
  EXPECT_FLOAT_EQ( RuleofSarrus(mat), 2.0);
}

TEST(RuleofSarrus_test, test4) 
{
  float mat[][3] = { {-1.0, 3.0, 0.0}, 
                    {4.0, 0.0, 5.0}, 
                    {-2.0, 5.0, 2.0} 
                  };
  EXPECT_FLOAT_EQ( RuleofSarrus(mat), -29.0);
}

TEST(RuleofSarrus_test, test5) 
{
  float mat[][3] = { {2.0, -4.0, 8.0}, 
                    {5.0, 4.0, 6.0}, 
                    {-3.0, 0.0, 2.0} 
                  };
  EXPECT_FLOAT_EQ( RuleofSarrus(mat), 224.0);
}