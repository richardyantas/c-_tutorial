#include<iostream>
#include "Char.h"
#include "Exception.h"
#include "Union.h"
using namespace std;

// To compile: g++ -std=c++11 4.cpp && ./a.out

enum class opt{_CHAR_,_EXCEPTION_,_UNION_};

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
	}
} 

int main()
{
	option(opt::_CHAR_);
}
