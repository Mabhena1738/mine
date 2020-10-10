// 5pass by reference.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

void display(int *a)    //passing by reference with pointer arguemwnt
{
	cout <<"You entered: "<<*a<<endl;     //displays value pointed to by the pointer
}

int _tmain(int argc, _TCHAR* argv[])
{
	int *prt;           //diclaring a pointer of type int
	int num;
	cout <<"Enter an Integer: "<<endl;
	cin>>num;
	prt = &num;                          //assigning the address of integer num to the pointer
	display(prt);

	system("pause");
	return 0;
}

