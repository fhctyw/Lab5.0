#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5.1/Main.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab51
{
	TEST_CLASS(UnitTestLab51)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			auto tmp = h(1, 0);  // a = 1, b = 0
			Assert::AreEqual(1., tmp);   //  expected = 1
		}
	};
}
