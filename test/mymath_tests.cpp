// Copyright 2024 Hyundai America Technical Center, Inc.

#include <gtest/gtest.h>
#include "../include/mymath.h"

// Demonstrate some basic assertions.
TEST(Sqrt, Sqrt9Is3) {
  // Expect equality.
  EXPECT_EQ(sqrt(9), 3);
}
