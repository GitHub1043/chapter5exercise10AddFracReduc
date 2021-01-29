// This program uses a function to add two fractions then reduce
// Written by: Ayden Holgate
// Date: Jan. 27, 2021

// chapter5exercise10AddFracReduc.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

// PROGRAM NOT FINISHED

void Reduce(int& num, int& denom){
	int low;
	
	if (num > denom){
		low = denom;
	}
	else {
		low = num;
	}

	for (int i = 2; i <= low; i++){
		if((num % i == 0) && (denom % i == 0)){
			num = num / i;
			denom = denom / i;
			i = 1;
		}

	}

}

void ReadFraction(){

}

void DisplayFraction(){

}

void AddFraction(int& numAdd, int& denomAdd){
	numAdd = num + num2;
	denomAdd = denom + denom2
}


int _tmain(int argc, _TCHAR* argv[])
{// Start of program
	int num, denom, num2, denom2;

	cout << "Enter fracton one:";

	cout << "Enter the numerator: ";
	cin >> num;

	cout << "Enter the denominator: ";
	cin >> denom;

	Reduce(num, denom);
	AddFraction(num, denom);


	cout << "Enter fracton two:";

	cout << "Enter the numerator: ";
	cin >> num;

	cout << "Enter the denominator: ";
	cin >> denom;

	Reduce(num, denom);
	num2 = num;
	denom2 = denom;

	cout << "The reduced fraction is " << num << "/" << denom << endl;


	return 0;
}// End of program
