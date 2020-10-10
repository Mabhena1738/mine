// 6inheritence.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class artist
{
public:
	void ent()
	{
		cout <<"An artist is an entertainer for all ages."<<endl;
	}

	void infor()
	{
		cout <<"My art helps to spread information and awareness in a unique way."<<endl;
	}
};

class musician : public artist //derive class musician from artist
{
public:
	void use()
	{
		cout <<"Musicians use vocals and musical instruments"<<endl;
	}
};

class visualartist : public artist   //derive class visual artist from artist
{
public:
	void use()
	{
		cout <<"Visual artists use drawings, expressions and acting"<<endl;
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	artist a;            //creates an object of artist class
	musician m;          //creates an object of musician class
	visualartist v;      //creates an object of visualartist class

	//calling members of the base class
	a.ent();             
	m.ent();
	v.infor();

	//calling members of the derived class
	m.use();
	v.use();
system("pause");
	return 0;
}

