/*
** EPITECH PROJECT, 2025
** nanotekspice
** File description:
** sample_function_test.cpp
*/

#include <gtest/gtest.h>

TEST(HelloTest, BasicAssertions) {
    // Expect two strings not to be equal.
    EXPECT_STRNE("hello", "world");
    // Expect equality.
    EXPECT_EQ(2 + 2, 4);
}