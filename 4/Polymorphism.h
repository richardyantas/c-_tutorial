#pragma once
#include "headers.h"

namespace Polymorphism
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
		virtual void print()
		{
			cout << "base" << endl;
		}
		virtual void show()
		{
			cout << "show base" << endl;
		}
		virtual ~base()
		{
			cout << "destructing base" << endl;			
		}
	};

	class sub1:public base	
	{
	public:
		sub1()
		{
			cout << "create sub1" << endl;
		}
		void print()
		{
			cout << "sub1" << endl;			
		}
		void show()
		{
			cout << "show sub1" << endl;
		}
		~sub1() 
		{
			cout << "destructing sub1" << endl;
		}
	};

	class sub2:public base	
	{
	public:
		sub2()
		{
			cout << "create sub2" << endl;
		}
		void print()
		{
			cout << "sub2" << endl;			
		}
		void show()
		{
			cout << "show sub2" << endl;
		}
		~sub2() 
		{
			cout << "destructing sub2" << endl;
		}
	};


	void evaluate(base *p)
	{
		p->print();
		p->show();
		delete p;
	}

	void test()
	{
		//base *p = new sub;
		//evaluate(p);

		//evaluate(p);
		
		base *p = new sub1;
		base *q = new sub2;
		evaluate(p);
		evaluate(q);


		return;
	}
}