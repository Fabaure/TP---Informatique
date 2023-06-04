#include "pch.h"
#include "CppUnitTest.h"
#include "Parse.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestUnitaire
{
	TEST_CLASS(TestUnitaire)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			std::string Entrée = "Cercle";
			std::string SortieAttendue = "Cercle";
			Parse p;
			std::string resultat = p.parse(Entrée);

			Assert::AreEqual(SortieAttendue, resultat);
		}

		TEST_METHOD(TestMethod2)
		{
			Parse p;
			std::string resultat = p.parse("Cercle");
			std::string SortieAttendue = "Rectangle";
			Assert::AreEqual(SortieAttendue, resultat);

		}
	};
}
