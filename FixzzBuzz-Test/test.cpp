#include "pch.h"

std::string fizzBuzz(int number) {
	return "1";
}

TEST(FizzBuzz, CanCallFunction) {
	fizzBuzz(1);
}

TEST(FizzBuzz, ReturnsAString) {
	std::string result = fizzBuzz(1);
}

TEST(FizzBuzz, Returns_1_AsString) {
	std::string result = fizzBuzz(1);
	EXPECT_EQ("1", result); // test fails if the two parameters are not equal 
}