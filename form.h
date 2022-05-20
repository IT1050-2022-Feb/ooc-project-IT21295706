#pragma once 
#include "Cart.h" 
#include "GuestUser.h" 
#include "Registereduser.h" 
 
class Registered; class 
GuestUser; 
Class Forms 
{ 
private: 
 	int FormID;  quantity; 
             double unitprice; 
 
 	//class relationship  
                 GuestUser *un[2]; 
                 RegisteredUser *r[2];  
 	Cart *cart[2]; 
 
public: 
 	Forms(); 
 	Forms(int id, int q, int fid, char const fName[], char const pDes[], int qa,double up); 
 	void display(); 
 	~Forms(); 
