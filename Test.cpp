#include "doctest.h"
#include "mat.hpp"
using namespace ariel;

#include<string>
#include <algorithm>
using namespace std;

string nospaces(string input) {
	std::erase(input, ' ');
	std::erase(input, '\t');
	std::erase(input, '\n');
	std::erase(input, '\r');
	return input;
}

TEST_CASE("Good input") {
CHECK(nospaces(mat(9, 7, '@', '-')) == nospaces("@@@@@@@@@\n"
													 "@-------@\n"
													 "@-@@@@@-@\n"
													 "@-@---@-@\n"
													 "@-@@@@@-@\n"
													 "@-------@\n"
													 "@@@@@@@@@"));

	CHECK(nospaces(mat(3, 5, '$', '+')) == nospaces("$$$\n"
													 "$+$\n"
													 "$+$\n"
													 "$+$\n"
													 "$$$\n"));

	CHECK(nospaces(mat(3, 5, '@', '@')) == nospaces("@@@\n"
													 "@@@\n"
													 "@@@\n"
													 "@@@\n"
													 "@@@\n"));

	CHECK(nospaces(mat(9, 1, '@', '-')) == nospaces("@@@@@@@@@\n"));

	CHECK(nospaces(mat(1, 7, '@', '-')) == nospaces("@\n"
													 "@\n"
													 "@\n"
													 "@\n"
													 "@\n"
													 "@\n"
													 "@"));

	CHECK(nospaces(mat(1, 1, '@', '-')) == nospaces("@\n"));

	CHECK(nospaces(mat(13, 5, '@', '-')) == nospaces("@@@@@@@@@@@@@\n"
													"@-----------@\n"
													"@-@@@@@@@@@-@\n"
													"@-----------@\n"
													"@@@@@@@@@@@@@\n"));

	CHECK(nospaces(mat(9, 5, '@', '-')) == nospaces("@@@@@@@@@\n"
													 "@-------@\n"
													 "@-@@@@@-@\n"
													 "@-------@\n"
													 "@@@@@@@@@"));

	CHECK(nospaces(mat(9, 3, '@', '-')) == nospaces("@@@@@@@@@\n"
													 "@-------@\n"
													 "@@@@@@@@@"));

	CHECK(nospaces(mat(7, 7, '@', '-')) == nospaces("@@@@@@@\n"
													 "@-----@\n"
													 "@-@@@-@\n"
													 "@-@-@-@\n"
													 "@-@@@-@\n"
													 "@-----@\n"
													 "@@@@@@@"));

	CHECK(nospaces(mat(7, 5, '@', '-')) == nospaces("@@@@@\n"
													 "@---@\n"
													 "@-@-@\n"
													 "@-@-@\n"
													 "@-@-@\n"
													 "@---@\n"
													 "@@@@@"));
}


//"Bad input"
TEST_CASE("Bad input") {
    CHECK_THROWS(mat(10, 5, '$', '%'));
	CHECK_THROWS(mat(3, 2, '$', '%'));
	CHECK_THROWS(mat(0, 5, '$', '%'));
	CHECK_THROWS(mat(10, 0, '$', '%'));
	CHECK_THROWS(mat(-10, -5, '$', '%'));
    /* Add more test here */
}

TEST_CASE("even numbers") {
    CHECK_THROWS(mat(10, 10, '$', '%'));
    CHECK_THROWS(mat(2, 1, '$', '%'));
    CHECK_THROWS(mat(1, 2, '$', '%'));                                                        
}

// TEST_CASE("not char") {
//     CHECK_THROWS(mat(10, 10, 1, 4));
//     CHECK_THROWS(mat(2, 1, '$', 2));
//     CHECK_THROWS(mat(1, 2, 4, '%'));                                                        
// }

// TEST_CASE("not numbers") {
//     CHECK_THROWS(mat( '$', '%', '$', '%'));
//     CHECK_THROWS(mat( '$', 1, '$', '%'));
//     CHECK_THROWS(mat( 1, '%', '$', '%'));                                                      
// }

TEST_CASE("non positive numbers") {
    CHECK_THROWS(mat(0, 0, '$', '%'));
    CHECK_THROWS(mat(-1, 2, '$', '%'));
    CHECK_THROWS(mat(0, -8, '$', '%'));
    CHECK_THROWS(mat(-1, -8, '$', '%'));                                                      
}