// Copyright 2024 Hyundai America Technical Center, Inc.

#include <gtest/gtest.h>
#include "../include/mymath.h"

// Test that sqrt(9) = 3
TEST(sqrt, Sqrt9Is3) {
  // Expect equality.
  EXPECT_EQ(sqrt(9), 3);
}

// Test that my_fact(5) = 120
TEST(fact, Fact5Is120) {
  EXPECT_DOUBLE_EQ(fact(5.0), 120.0);
}

// Test that my_fact(5) = 120
TEST(pow, Pow2To5Is32) {
  EXPECT_DOUBLE_EQ(pow(2.0, 5.0), 32.0);
}

// Test that my_fact(5) = 120
TEST(fmod, Fmod5Dot13Dot0Is2Dot1) {
  EXPECT_DOUBLE_EQ(fmod(5.1, 3.0), 2.1);
}

// Test that sin(PI/2) = 1
TEST(sin, SinPiOver2Is1) {
  EXPECT_DOUBLE_EQ(sin(3.14159265358979323846 / 2.0), 1.0);
}
