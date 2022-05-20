// submission.cpp 

# include "Submission.h" 
# include <cstring> 
# include <iostream> 
using namespace std ; 

Submission::Submission() 

{
SubmissionId = 0 ; 
UserId = 0 ; 
strcpy(GuestName,"") ; 
strcpy(SubmissionDate,"") ; 
}

Submission::Submission(int SId,const char Gname[],const char SDate[]); 
{
SubmissionId = SId ; 
strcpy(GuestName,Gname);
strcpy(SubmissionDate,SDate) ; 
} 

void Submission :: removeSubmission ()
{
	
} 

void Submission :: displaySubmissionDetails () 
{
	
}

Submission::~Submission() 
{
	
}
