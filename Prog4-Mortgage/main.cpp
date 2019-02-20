
// main goes here. Code that *uses* the Mortgage class
// goes in this file

#include <iostream>
#include <string>
#include <iomanip>
#include "Mortgage.h"
using namespace std;

bool parseInt(string sval, int& val);
bool parseDouble(string sval, double& val);

int main()
{
	double loan, rate, payment;
	int years;
	string input;
	bool stupidity = true;

	while(stupidity)
	{
		cout << "How large is the loan? $";
		//cin >> loan;
		getline(cin, input);
		if (!parseDouble(input, loan))
		{
			cout << "Invalid Input! Enter a Positive Number.\n";
		}
		else if (loan < 0)
		{
			cout << "Invalid Input! Enter a Positive Number.\n";
		}
		else
		{
			loan = stod(input);
			stupidity = false;
		}
	}

	stupidity = true;
	while (stupidity)
	{
		cout << "What is its annual interest rate (%)? ";
		//cin >> rate;
		//rate = rate / 100;
		getline(cin, input);
		if (!parseDouble(input, rate))
		{
			cout << "Invalid Input! Enter a Positive Number.\n";
		}
		else if (rate < 0 || rate > 100)
		{
			cout << "Invalid Input! Enter a Positive Number.\n";
		}
		else
		{
			rate = stod(input) / 100;
			stupidity = false;
		}
	}

	stupidity = true;
	while (stupidity)
	{
		cout << "How many years does it last? ";
		//cin >> years;
		getline(cin, input);
		if (!parseInt(input, years))
		{
			cout << "Invalid Input! Enter a Positive Number.\n";
		}
		else if (years < 0)
		{
			cout << "Invalid Input! Enter a Positive Number.\n";
		}
		else
		{
			years = stoi(input);
			stupidity = false;
		}
	}

	Mortgage debt(loan, rate, years);

	payment = debt.getPayment();

	cout << "The loan's monthly payment is $" << fixed << showpoint << setprecision(2) << payment;

	return 0;
}

bool parseInt(string sval, int& val)
{
	int num;
	bool success = true;
	try
	{
		num = stoi(sval);   // or use stof for string-to-float
		val = num;
	}
	catch (const std::exception&)
	{
		success = false;
	}
	return success;
}

bool parseDouble(string sval, double& val)
{
	double num;
	bool success = true;
	try
	{
		num = stod(sval);   //Modified the above function I stole from Blackboard
		val = num;
	}
	catch (const std::exception&)
	{
		success = false;
	}
	return success;
}

//The real stupidity is forgeting to do this assignment until bedtime the day before. :P
//I will try to do better.