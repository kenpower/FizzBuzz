#include "pch.h"

bool isAMultipleOf(int number, int divisor) {
	return number % divisor == 0;
}

std::string fizzBuzz(int number) {
	const std::string  MULTIPLE_OF_THREE_STRING = "Fizz";
	const std::string  MULTIPLE_OF_FIVE_STRING = "Buzz";
	if (isAMultipleOf(number, 15))
		return  MULTIPLE_OF_THREE_STRING + MULTIPLE_OF_FIVE_STRING;
	if (isAMultipleOf(number, 3))
		return MULTIPLE_OF_THREE_STRING;
	if (isAMultipleOf(number, 5))
		return MULTIPLE_OF_FIVE_STRING;
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

TEST(FizzBuzz, Handles_multi_digit_numbers) {
	std::string result_11 = fizzBuzz(11);
	EXPECT_EQ("11", result_11);
	std::string result_101 = fizzBuzz(101);
	EXPECT_EQ("101", result_101);
}

TEST(FizzBuzz, Returns_3_AsFIZZ) {
	std::string result = fizzBuzz(3);
	EXPECT_EQ("Fizz", result);
}

TEST(FizzBuzz, Returns_6_AsFIZZ) {
	std::string result = fizzBuzz(6);
	EXPECT_EQ("Fizz", result);
}

TEST(FizzBuzz, Returns_6_AsBUZZ) {
	std::string result = fizzBuzz(5);
	EXPECT_EQ("Buzz", result);
}

TEST(FizzBuzz, Returns_15_AsFizzBUZZ) {
	std::string result = fizzBuzz(15);
	EXPECT_EQ("FizzBuzz", result);
}