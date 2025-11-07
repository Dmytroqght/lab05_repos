#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05_1.cpp" 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
    TEST_CLASS(UnitTest2)
    {
    public:

        TEST_METHOD(TestMy_g_Function)
        {
            double a = 2.0;
            double b = 3.0;
            double expected_result = 19.0;
            double actual_result = g(a, b);
            Assert::AreEqual(expected_result, actual_result);
        };
    };
}