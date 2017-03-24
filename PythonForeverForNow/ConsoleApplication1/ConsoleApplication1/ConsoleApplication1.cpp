// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
//Including strings to accept string content for username variable.
#include <string>
using namespace std;



int main()
{
   
	int funny = 6, serious = 29;
	funny = serious % 2;
	if (funny != 1)
	{
		funny = 0;
		serious = 0;
	}
	else if (funny == 2)
	{
		funny = 10;
		serious = 10;
	}
	else
	{
		funny = 1;
		serious = 1;
	}
	cout << funny << "" << serious << endl;

	//int x = -1;

	//cout << "Enter a 0 or a 1 from the keyboard: ";

	//cin >> x;
	//cin.ignore();

//	if (x)
//
	//	cout << "true" << endl;
//
//	else

//cout << "false" << endl;
	getchar();
	return 0;
}

