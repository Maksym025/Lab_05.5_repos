#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05.5/Lab_05.5.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int expOct = 31;
			int n = 25;
			int depth = 2;
			Assert::AreEqual(toOctal(n,depth), expOct);
		}
	};
}
