#include "pch.h"

std::string fizzBuzz(int number) {
	if (2 == number)
		return "2";
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

TEST(FizzBuzz, Returns_2_AsString) {
	std::string result = fizzBuzz(2);
	EXPECT_EQ("2", result); // test fails if the two parameters are not equal 
}
