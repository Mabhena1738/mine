// 4class.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class Area
{
public:
	float setDimension(float length, float breadth)
	{
		
		return length * breadth;
	}
	void getArea(float a)
	{
		cout <<"The area is: "<<a<<endl;
	}
};


int _tmain(int argc, _TCHAR* argv[])
{
	Area a;
	float area, length, breadth;
	cout <<"Enter the length: "<<endl;
	cin >>length;
	cout <<"Enter the breadth: "<<endl;
	cin >>breadth;
	area = a.setDimension(length, breadth); 
	a.getArea(area);
	system("pause");
	return 0;
}

