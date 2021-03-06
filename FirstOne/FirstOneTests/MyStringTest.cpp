#include "stdafx.h"
#include <boost/test/unit_test.hpp>
#include "../FirstOne/my_string.h"
#include <iostream>

#define BOOST_CONFIG_SUPPRESS_OUTDATED_MESSAGE

BOOST_AUTO_TEST_SUITE(MyStringTests)

using namespace std;
struct F {
	F() : i(0) { cout << "setup" << std::endl; }
	~F() { cout << "teardown" << std::endl; }

	int i;
};

BOOST_FIXTURE_TEST_CASE(test_case1, F)
{
	BOOST_CHECK(i == 1);
	++i;
}


BOOST_AUTO_TEST_CASE(string_test1)
{
	mystring s;
	BOOST_CHECK(s.size() == 0);
}

BOOST_AUTO_TEST_CASE(string_test2)
{
	mystring s;
	char test[] = "hello world";
	s.setbuffer(test);
	BOOST_REQUIRE_EQUAL('h', s[0]); // basic test 
}

BOOST_AUTO_TEST_CASE(my_boost_test)
{
	int a = 5;
	int b = 13;

	//BOOST_CHECK(18 == AddPtr(&a, &b));

	float x = 9.5f;

	BOOST_CHECK(x != 0.0f);
	BOOST_CHECK_EQUAL((int)x, 9);
	BOOST_CHECK_CLOSE(x, 9.5f, 0.0001f); // Checks differ no more then 0.0001%

}



BOOST_AUTO_TEST_SUITE_END()