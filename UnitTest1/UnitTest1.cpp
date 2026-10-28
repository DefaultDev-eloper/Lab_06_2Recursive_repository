#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_06_2Recursive.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(TestReverseRecOddSize)
		{
			int a[5] = { 1, 2, 3, 4, 5 };
			ReverseArrayRec(a, 5, 0);

			Assert::AreEqual(5, a[0]);
			Assert::AreEqual(4, a[1]);
			Assert::AreEqual(3, a[2]);
			Assert::AreEqual(2, a[3]);
			Assert::AreEqual(1, a[4]);
		}

		TEST_METHOD(TestReverseRecEvenSize)
		{
			int a[4] = { 1, 2, 3, 4 };
			ReverseArrayRec(a, 4, 0);

			Assert::AreEqual(4, a[0]);
			Assert::AreEqual(3, a[1]);
			Assert::AreEqual(2, a[2]);
			Assert::AreEqual(1, a[3]);
		}

		TEST_METHOD(TestReverseRecSingleElement)
		{
			int a[1] = { 7 };
			ReverseArrayRec(a, 1, 0);

			Assert::AreEqual(7, a[0]);
		}
	};
}