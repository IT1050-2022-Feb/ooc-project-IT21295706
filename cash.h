#pragma once

#include "Payment.h"

class Cash :public Payment

{

protected:

	double payAmount;

	double balance;

public:

	Cash();

	Cash(double amount, double CBal);

	void displayReceipt();

	~Cash();

};

