#include "pch.h"

void fizzBuzz(int number) {}

TEST(FizzBuzz, CanCallFunction) {
	fizzBuzz(1);
}

TEST(FizzBuzz, ReturnsAString) {
	std::string result = fizzBuzz(1);
}