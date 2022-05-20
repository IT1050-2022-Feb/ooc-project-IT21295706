// Card.cpp

#include "Card.h"
#include <iostream>
#include <cstring>
using namespace std; 

Card::Card() 
{
Strcpy(cardType , " ");
cardNumber = 0;
expiredate = 0;
};

Card::Card (const char cType[],int cNo,int Date[] , int id , double Pamount , const char 
PType[]):Payment(id , PAmount , PType[])
{
strcpy(cardType, cType); 
cardNumber = cNo; 
expiredate = Date; 
} 

double Card::calcTotal()
{
	
}

Card::~Card()
{
	
} 