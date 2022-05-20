//********GuestUser.h**********

#pragma once
#include "Form.h"

#define SIZE 2

class GuestUser
{
private:
// class relationship
Form * form[SIZE] ;

protected:
int UserID ;
char GuestName[30] ;
char GuestEmail[50] ;
char GuestDOB[10] ;
char UserName[20] ;
char Password[15] ;
int ContactNumber ;

public:
GuestUser();
GuestUser(int uid,char const gname[], char const email[], char const dob[], 
 	char const uname[], char const pwd[], int number);
void Registration();
int passwordValidation();
~GuestUser();

};
