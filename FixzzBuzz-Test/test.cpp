#include "pch.h"

std::string fizzBuzz(int number) {
	return std::to_string(number);
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

TEST(FizzBuzz, Returns_2_AsString) {
	std::string result = fizzBuzz(2);
	EXPECT_EQ("2", result); 
}

TEST(FizzBuzz, Returns_4_AsString) {
	std::string result = fizzBuzz(4);
	EXPECT_EQ("4", result); 
}