#include "pch.h"
#include "CppUnitTest.h"
#include "../laba6.3_rek/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

int countOdd(const int a[], int n, int i);

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestMixed)
        {
            int a[] = { 3, 8, 5, 12, 7 };

            Assert::AreEqual(3, countOdd(a, 5, 0));
        }

        TEST_METHOD(TestAllEven)
        {
            int a[] = { 2, 4, 6, 8 };

            Assert::AreEqual(0, countOdd(a, 4, 0));
        }

        TEST_METHOD(TestNegative)
        {
            int a[] = { -3, -4, -7, 10, 11 };

            Assert::AreEqual(3, countOdd(a, 5, 0));
        }
    };
}