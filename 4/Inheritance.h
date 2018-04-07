#pragma once
#include "headers.h"

namespace Inheritance
{
	class base
	{
	public:
		base()
		{
			cout << "create base" << endl;
		}
		base(int a)
		{
			 
		}
		void print()
		{
			cout << "base" << endl;
		}
		void show()
		{
			cout << "show base" << endl;
		}
		~base()
		{
			cout << "destructing base" << endl;			
		}
	};

	class sub:public base	
	{
	public:
		sub()
		{
			cout << "create sub" << endl;
		}
		void print() //override
		{
			cout << "sub" << endl;			
		}
		void show()
		{
			cout << "show sub" << endl;
		}
		~sub()
		{
			cout << "destructing sub" << endl;
		}
	};


	void test()
	{

		sub *p = new sub;
		p->print();
		p->show();	
		delete p;

		return;
	}

}