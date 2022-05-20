// submission.h 

# pragma once 
# include "Cart.h" 
#include "Payment.h" 
# define SIZE 2 

class Submission 
{
	
private:
int SubmissionId ; 
int UserId ; 
char GuestName[30] ;
char SubmissionDate[20] ; 
     // class relationship 
     Cart*crt[SIZE] ; 
     
public:
 Submission();
 Submission(int Sid,const char Gname[],const char SDate[]) ;
 void removeSubmission ; 
 void displaySubmissionDetails() ;
 ~Submission() ; 
} 