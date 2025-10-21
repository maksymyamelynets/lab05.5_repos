#include "pch.h"
#include "CppUnitTest.h"
#include "../PR-5.5/pr-5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest55
{
	TEST_CLASS(UnitTest55)
	{
	public:
		
		TEST_METHOD(BaseCaseTest)
		{
			Assert::AreEqual(1, Q(1, 1));
			Assert::AreEqual(1, Q(1, 5));
			Assert::AreEqual(1, Q(5, 1));
		}

		TEST_METHOD(SymmetricCaseTest)
		{
			Assert::AreEqual(Q(3, 5), Q(5, 3));
			Assert::AreEqual(Q(2, 6), Q(6, 2));
		}

		TEST_METHOD(EqualArgumentsTest)
		{
			Assert::AreEqual(1 - Q(4, 3), Q(4, 4));
			Assert::AreEqual(1 - Q(5, 4), Q(5, 5));
		}

		TEST_METHOD(GeneralCasesTest)
		{
			Assert::AreEqual(5, Q(5, 3));
			Assert::AreEqual(2, Q(6, 4));
			Assert::AreEqual(6, Q(7, 3));
		}
	};
}