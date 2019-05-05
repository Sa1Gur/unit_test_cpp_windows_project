#include "stdafx.h"

#include "../WindowsProject/check.h"

using namespace System;
using namespace System::Text;
using namespace System::Collections::Generic;
using namespace	Microsoft::VisualStudio::TestTools::UnitTesting;

namespace UnitTest1
{
	[TestClass]
	public ref class UnitTest
	{
	public:
		[TestMethod]
		void TestMethod1()
		{
			auto actual = CheckE2('e', 2);
			auto expected = true;
			Assert::AreEqual(expected, actual);
		}

		[TestMethod]
		void TestMethod2()
		{
			auto actual = CheckE2('f', 3);
			auto expected = false;
			Assert::AreEqual(expected, actual);
		}

		[TestMethod]
		void TestMethod3()
		{
			auto actual = CheckE2('g', 5);
			auto expected = true;
			Assert::AreEqual(expected, actual);
		}
	};
}

