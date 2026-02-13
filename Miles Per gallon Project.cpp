/* File name: Miles per gallon Project
Programmer: Esmatullah Bek
Date: 02/ 2026
requirment: Write a program that calculate the numers of miles per gallon the car gets.
*/


#include <iostream>
using namespace std;

int main()
{
	double milesDriven = 375;
	double gallonsUsed = 15;

	double MPG = milesDriven / gallonsUsed;
	cout << "miles per gallon " << MPG << endl; 
	cout << "milesDriven" << milesDriven << endl;
	cout << " gallonsUsed" << gallonsUsed << endl;

	return 0;
}

