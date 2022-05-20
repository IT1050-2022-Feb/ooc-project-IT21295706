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
