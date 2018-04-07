#pragma once
#include "headers.h"

namespace Interface
{
	class base
	{
	public:		
		virtual void print() = 0;
		virtual void show() = 0;
	};

	class sub:public base
	{
	public:
		sub(){}
		void print()
		{
			cout << "sub" << endl;
		}
		void show()
		{
			cout << "show sub" << endl; 
		}

	};

	class sub2:public base
	{
	public:
		sub2(){}
		void print()
		{
			cout << "sub2" << endl;
		}

		void show()
		{
			cout << "show sub2" << endl;
		}
	};


	void printsubs(base *v)
	{

	}

	void test()
	{	
		base *p[2]={new sub,new sub2};

		for(int i = 0; i < 2; i++)
		{
			p[i]->print();	
		}
	}
}



