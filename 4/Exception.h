#pragma once 
#include "headers.h"

namespace Exception
{
	double div(double n, double d)
	{	
		if(d == 0)
		{
			throw std::exception();
		}
	}

	void test()
	{
		try
		{
			std::cout << div(2.3,0.0) << std::endl;  // div(2.3,0) is ambiguos
		}
		catch(std::exception exception)
		{
			std::cout << "An exception was caught!" << std::endl;
		}
	}

}