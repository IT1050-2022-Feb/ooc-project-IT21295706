#include "Cash.h"

#include <iostream>

Cash::Cash()

{
	payAmount = 0;

	balance = 0;
}

Cash::Cash(double amount, double CBal, int id, double PAmount, const char PType[]):Payment(id , PAmount , PType)

{
	payAmount = amount;

	balance = CBal;

}

void Cash::displayReceipt()

{

}

Cash::~Cash()
{

}