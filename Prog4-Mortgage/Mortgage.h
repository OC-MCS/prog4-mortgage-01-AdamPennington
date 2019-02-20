#pragma once
// header file for Mortgage class

class Mortgage
{
	private: 
		double loan, rate, term, payment, total;
		int years;
		void termFinder();
		void paymentFinder();
		void totalFinder();
	public: 
		Mortgage(double, double, int);
		double getPayment();
		double getTotal();
};
