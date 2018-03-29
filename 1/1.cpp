#include<iostream>
//#include "1.h"
using namespace std;

void foo1()
{
	int a = 2;
	{
		int a = 1;
	}
	cout << a << endl;
}

void foo2()
{
	int a = 5;
	while(a--)
	{
		static int a = 1;
		cout << a++ << endl;
	}
}

extern int x;

int main()
{
	cout << "c value is: " << x << endl;
	//cout << "global variable: " << var_global << endl;  // doesnt work?
}