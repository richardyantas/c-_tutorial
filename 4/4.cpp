#include "headers.h"

// To compile: g++ -std=c++11 4.cpp && ./a.out
// enum class works with -std=c++11
  

enum class opt{_CHAR_,_EXCEPTION_,_UNION_,_POLYMORPHISM_,_INHERITANCE_,_INTERFACE_,_STL_,_TEMPLATES_};

void option(opt c)
{
	switch(c)
	{
		case opt::_CHAR_:
		{
			Char::test();			
			break;
		}		
		case opt::_EXCEPTION_:
		{
			Exception::test();
			break;
		}
		case opt::_UNION_:
		{
			Union::test();
			break;
		}

		case opt::_POLYMORPHISM_:
		{
			Polymorphism::test();
			break;
		}
		case opt::_INHERITANCE_:
		{
			Inheritance::test();
		}
		case opt::_INTERFACE_:
		{
			Interface::test();
		}
		case opt::_STL_:
		{
			Stl::test();
		}
		case opt::_TEMPLATES_:
		{
			Templates::test();
		}
	}
} 

int main()
{
	option(opt::_STL_);
}
