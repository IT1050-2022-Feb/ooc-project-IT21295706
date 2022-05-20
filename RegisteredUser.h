//*******RegisterUser.h*********

#pragma once

#include "GuestUser.h"
#include "Form.h"
#include "Cart.h"

#define SIZE 2

class RegisteredUser:

public GuestUser
{
	
private:

  	 //class relationship
 	Form * form[SIZE];
Cart * cart ;
 
public:

 	RegisteredUser();
 	RegisteredUser(char const runame[25], char const rpwd[8]);
 	void login();
 void checkPassword();
 	void logout();
~RegisteredUser(); 
 
};
