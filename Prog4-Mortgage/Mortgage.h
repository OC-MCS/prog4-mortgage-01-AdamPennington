#pragma once
// header file for Mortgage class

class Mortgage
{
	private: 
		double loan, rate, term, payment;
		int years;
		void termFinder();
		void paymentFinder();
	public: 
		Mortgage(double, double, int);
		double getPayment();
};
