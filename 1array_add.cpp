// 1array_add.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int num[5] = {3, 4, 6, 9, 11}; //initialising the array
	int i;
	int c = 0;
	for(i = 0; i < 5; ++i)
	{
 		c = c + num[i];   //adding each member of the member to the variable c
	}
	cout <<"The total is: "<<c<<endl; //displays the sum of the members
	system ("pause");
	return 0;
}

