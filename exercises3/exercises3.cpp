// exercises3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	ifstream inFile;
	ofstream outFile;

	int ssn[] = { 0,0,0,0,0,0,0,0 };
	double rate[] = { 0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0 };
	double wHour[] = { 0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0 };
	double grossPay[] = { 0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0 };

	inFile.open("..\\workers.txt", ios::in);

	string fLine;
	getline(inFile, fLine);

	cout << "SSN\tGross Pay\n";
	for (int i = 0; i < 8; i++) {
		inFile >> ssn[i] >> rate[i] >> wHour[i];
		grossPay[i] = rate[i] * wHour[i];
		cout << ssn[i] << "\t$" << grossPay[i] << endl;
	}

	system("pause");
    return 0;
}

