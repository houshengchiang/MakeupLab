// excercises1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	ofstream outFile;

	int social = 0;
	double rate = 0.0, wHour = 0.0;

	outFile.open("..\\workers.txt", ios::out);

	outFile << "SSN\tHourly Rate\tWork Hours\n";

	for (int i = 0; i < 5; i++) {
		cout << "Enter last 4 digits of social security number: ";
		cin >> social;
		cout << "Enter hourly rate: ";
		cin >> rate;
		cout << "Enter number of work hours per week of each worker: ";
		cin >> wHour;
		outFile << social << "\t" << rate << "\t\t" << wHour << "\n";
	}
	
	outFile.close();

	system("pause");
    return 0;
}

