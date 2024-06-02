#include <gtest/gtest.h>

#include "Lesson1.hpp"

TEST(Lesson1Test, AddTest) {
  Lesson1 lesson;
  EXPECT_EQ(lesson.add(1, 1), 2);
  EXPECT_EQ(lesson.add(2, 2), 4);
}
