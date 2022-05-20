
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


//***********GuestUser.CPP**************

#include "GuestUser.h"
#include <cstring>
#include <iostream>

using namespace std;

GuestUser::GuestUser()
{
	
UserID = 0;
strcpy(GuestName, "");
strcpy(GuestEmail, "");
strcpy(GuestDOB, "");
strcpy(UserName, "");
strcpy(Password, "");
contactNumber = 0;
}


GuestUser::GuestUser(int uid,char const gname[], char const email[], char const dob[], 
 char const uname[], char const pwd[], int number)
{
	
UserID = uid;
strcpy(GuestName, gname);
strcpy(GuestEmail, email);
strcpy(GuestDOB, dob);
strcpy(UserName, uname);
strcpy(Password, pwd);
contactNumber = number;
}
void GuestUser::Registration()
{
	
}

int GuestUser::passwordValidation()
{
	char rav[30];
 strcpy(rav,"guest");
 
 	if((strcmp (userName,rav)== 0) && (strcmp (Password,"1234")== 0))
 {
 	
 return 1;
 }
 
 	else
 {
 	
 return 0;
 	}
 
}

GuestUser::~GuestUser()
{
cout << "Destructor runs" << endl;
}


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



//*******RegisterUser.CPP***********


#include "RegisteredUser.h"
#include <cstring>
#include <iostream>

using namespace std;

RegisteredUser::RegisteredUser()

{
strcpy(GuestName, "");
strcpy(Password, "");
}

RegisteredUser::RegisteredUser(char const gname[], char const pwd[])
{
	
strcpy(userName, gname);
strcpy(Password, pwd);
}

void RegisteredUser::login()
{
}

void RegisteredUser::checkPassword()
{
	
 	char rav[30];
 	strcpy(rav,"guest");
 
 	if((strcmp (userName,rav)==0) && (strcmp(Password,"1234") ==0))
 { 
 
cout << "******************" << endl << endl << "------ Welcome ------" << endl << endl;
 	}
 
 else
 {
 		cout << endl << endl << "Invalid Username or Password" << endl << endl;
 }
 
}

void RegisteredUser::logout()
{
}

RegisteredUser::~RegisteredUser()
{
cout << "Destructor runs" << endl;
}

