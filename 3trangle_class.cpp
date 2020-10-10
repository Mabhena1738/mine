// 3trangle_class.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class Triangle
{
public:
	float b, h, hyp;
	void perimeter(float a, float b, float c)
	{
		float p = a + b + c;
		cout <<"Perimeter is = "<<p<<endl;
	}
	void area(float a, float b)
	{
		float area = (a * b) * 1/2;
		cout <<"Area is = "<<area<<endl;
	}
};


int _tmain(int argc, _TCHAR* argv[])
{
	Triangle t;
	t.perimeter(5, 4, 3);
	t.area(4, 3);
	system("pause");
	return 0;
}

