#include "pch.h"
#include "CppUnitTest.h"
#include "../Algorythmization Lab 09.1/Source.cpp"
#include "../Algorythmization Lab 09.1/nsVar.cpp"
#include "../Algorythmization Lab 09.1/functions.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			double x = 0.5; int n = 4;
			double a = (x - 1.0) / x;
			double R;

			R = (((n * 1.0) * (x - 1)) / (x * ((n * 1.0) + 1)));
			a *= R;

			Assert::AreEqual(funcTay::A(0.5, 4, (0.5 - 1.0) / 0.5), a);
		}
	};
}
