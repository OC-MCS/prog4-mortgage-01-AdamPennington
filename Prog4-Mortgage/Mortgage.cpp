// implementation file for Mortgage class

#include "Mortgage.h"
#include <iostream>

using namespace std;

Mortgage::Mortgage(double loanInput, double rateInput, int yearsInput)
{
	loan = loanInput;
	rate = rateInput;
	years = yearsInput;
}

void Mortgage::termFinder()
{
	term = pow((1 + (rate / 12)), (12 * years));
}

void Mortgage::paymentFinder()
{
	payment = (loan * (rate / 12) * term) / (term - 1);
}

void Mortgage::totalFinder()
{
	total = payment * 12 * years;
}

double Mortgage::getPayment()
{
	termFinder();
	paymentFinder();

	return payment;
}

double Mortgage::getTotal()
{
	termFinder();
	paymentFinder();
	totalFinder();

	return total;
}