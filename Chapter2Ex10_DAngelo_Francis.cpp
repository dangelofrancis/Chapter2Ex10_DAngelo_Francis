/*
TITLE: Chapter 2 Exercise 10 - Distance Per Tank of Gas
FILE NAME: Chapter2Ex10_DAngelo_Francis.cpp
PROGRAMMER: D'Angelo Francis
DATE: 09/2024
REQUIREMENTS: A car holds 15 gallons of gasoline and can travel 375 miles before refueling. Write a program that
	calculates the number of miles per gallon the car gets. Display the result on the screen.
*/

#include <iostream>
using namespace std;
const double gallons = 15;
const double milesDriven = 375;

int main()
{
	double mpg = milesDriven / gallons;
	cout << "The number of miles per gallon this car gets is: " << mpg << endl;
	return 0;
}