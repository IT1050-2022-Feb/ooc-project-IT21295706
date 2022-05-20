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
