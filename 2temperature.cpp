// 2temperature.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	float temp, result;
	cout <<"THIS IS PROGRAM CONVERTS TEMPERATURE IN CELCIUS TO FAHRENHEIT."<<endl;
	cout <<"ENTER THE TEMPERATURE VALUE YOU WISH TO CONVERT: "<<endl;
	cin >>temp;
	
	//formula to convert the temperature entered
	result = (temp * 9/5) + 32;
	cout <<temp<<" Celcius "<<"IS EQUAL TO: "<<result<<" Fahrenheit"<<endl;
	system("pause");
	return 0;
}

