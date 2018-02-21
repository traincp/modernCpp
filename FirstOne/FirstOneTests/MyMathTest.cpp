#include "stdafx.h"
#include "../FirstOne/my_math.h"
#include <boost/test/unit_test.hpp>

using namespace std;

struct CMyMathTestFixture
{
	CMyMathTestFixture()
		: m_configFile("test.tmp")
	{
		// TODO: Common set-up each test case here.
		FILE *stream;
		fopen_s(&stream, m_configFile.c_str(), "w+");
		fclose(stream);
	}

	~CMyMathTestFixture()
	{
		// TODO: Common tear-down for each test case here.
		remove(m_configFile.c_str());
	}

	// TODO: Possibly put some common tests.
	//void TestSaveLoad(CMyFoo& foo, bool asBinary)
	//{
	//	BOOST_CHECK(foo.Save(asBinary));
	//}

	// TODO: Declare some common values accesses in tests here.
	string m_configFile;
	MyMath math;
};


BOOST_FIXTURE_TEST_SUITE(MyMathTests, CMyMathTestFixture);


BOOST_AUTO_TEST_CASE(TestAddPtr)
{
	int a = 5;
	int b = 13;

	BOOST_CHECK(18 == math.AddPtr(&a, &b));
}

BOOST_AUTO_TEST_CASE(TestAddVal)
{
	int a = 7;
	int b = 13;
	int result;
	math.AddVal(&a, &b, &result);

	BOOST_CHECK(20 == result);
}

BOOST_AUTO_TEST_CASE(Swap)
{
	int a = 7;
	int b = 13;
	math.Swap(&a, &b);

	BOOST_CHECK(7 == b);
	BOOST_CHECK(13 == a);
}

BOOST_AUTO_TEST_CASE(Factorial)
{
	int n = 5;
	int result = 13;
	math.Factorial(&n, &result);

	BOOST_CHECK(120 == result);
}

BOOST_AUTO_TEST_CASE(AddRef)
{
	int n = 5, m = 7;
	int result{0};
	math.AddRef(n, m, result);

	BOOST_CHECK(12 == result);
}

BOOST_AUTO_TEST_CASE(FactorialRef)
{
	int n = 5;
	int result = 13;
	math.Factorial(n, result);

	BOOST_CHECK(120 == result);
}

BOOST_AUTO_TEST_CASE(SwapRef)
{
	int a = 5;
	int b = 7;
	math.Swap(a, b);

	BOOST_CHECK(5 == b);
	BOOST_CHECK(7 == a);
}


BOOST_AUTO_TEST_SUITE_END()