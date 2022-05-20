// Card.h
# pragma once 
# include "payment.h" 
# include <cstring> 

class Card : public Payment 
{
	
protected:
 char cardType[10];
 int cardNumber; 
 int expiredate ; 
 
public:
 card();
 card(const char cType[],int cNo,int Date);
 double calcTotal(); 
 ~Card(); 
 
} 