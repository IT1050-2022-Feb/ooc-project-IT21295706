#pragma once

#include "Submission.h"

#define SIZE 2

class Payment

{

protected:

	int paymentID;

	double amount;

	char paymentType[20];


private:
	Submission *Sub[SIZE];

public:
	Payment();

	Payment(int id, double PAmount, const char PType[]);

	void displayPaymentDetails();

	~Payment();
};