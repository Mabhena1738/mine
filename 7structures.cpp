// 7structures.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

struct student
{
	int No;
	char Name[100];
	int Age;
	int Marks;
};

int _tmain(int argc, _TCHAR* argv[])
{
	student s;

	//Taking input from the user
		cout <<"Enter name: "<<endl;
		cin.get(s.Name, 100);
		cout <<"Enter age: "<<endl;
		cin >>s.Age;
		cout <<"Enter Mark: "<<endl;
		cin >>s.Marks;
	
	cout <<"No. \t"<<"Name \t\t"<<"Age \t"<<"Mark \t"<<endl;
    cout <<"1. \t"<<s.Name<<"\t"<<s.Age<<"\t"<<s.Marks<<endl;
	 system("pause");
	return 0;
}

