#include "../src/find_digits.h"
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

/*
	To check output (At the find_digits directory):
		g++ -std=c++14 -Werror -Wuninitialized -o test test-unit/test.cpp && ./test
*/

TEST_CASE("Function: findDigits. Testing adding 1 new digit. x is \"1234\", y is \"12345\"", "[simple]") {
	std::string x = "1234", y = "12345";
	REQUIRE(findTheDigits(x, y) == "5");
}

TEST_CASE("Function: findDigits. Testing adding n more new digits. x is \"8\", y is \"56981234\"", "[simple]") {
	std::string x = "8", y = "56981234";
	REQUIRE(findTheDigits(x, y) == "1234569");
}

TEST_CASE("Function: findDigits. Testing adding repetitive digits. x is \"1\", y is \"321321\"", "[edge]") {
	std::string x = "1", y = "321321";
	REQUIRE(findTheDigits(x, y) == "12233");
}

TEST_CASE("Function: findDigits. Testing adding repetitive digits. x is \"1234567890\", y is \"12345678901234567890\"", "[big]") {
	std::string x = "1234567890", y = "12345678901234567890";
	REQUIRE(findTheDigits(x, y) == "0123456789");
}

TEST_CASE("Function: findDigits. Testing adding repetitive digits. x is \"0\", y is \"0\"", "[edge]") {
	std::string x = "0", y = "0";
	REQUIRE(findTheDigits(x, y) == "");
}

TEST_CASE("Function: findDigits. Testing adding repetitive digits. x is \"69\", y is \"6969696969696969696969696969696969696969\"", "[sams friday night]") {
	std::string x = "69", y = "6969696969696969696969696969696969696969";
	REQUIRE(findTheDigits(x, y) == "66666666666666666669999999999999999999");
}

TEST_CASE("Function: findDigits. Testing adding repetitive digits. x is \"1331\", y is \"3113\"", "[edge]") {
	std::string x = "1331", y = "3113";
	REQUIRE(findTheDigits(x, y) == "");
}


