#include "Payment.h"

#include <iostream>

#include <cstring>

using namespace std;

Payment::Payment()

{
	paymentID = 0;

	amount = 0;

	strcpy(paymentType, "");

	sub = new Submission[SIZE];

	cout << "Payment default constructor called" << endl;

}

Payment::Payment(int id, double PAmount, const char PType[])

{
	paymentID = id;

	amount = PAmount;

	strcpy(paymentType, PType);

}

void Payment::displayPaymentDetails()

{

}

Payment::~Payment()

{
	Delete sub[SIZE];

	cout << "Payment destructor called" << endl;
	
}
