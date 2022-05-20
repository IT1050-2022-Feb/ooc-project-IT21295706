#include <iostream>
#include <cstring>
using namespace std;

Cart:: Cart (int FID, char const FName[], int q, double c)
{
	FormID = FID;
	strcpy ( FormName, FName);
	quantity =q;
	ChargesOfForm= c;
}

void Cart:: addForms ()
{
	cout << "Form is added" << endl;
}

void Cart:: removeForms ()
{
	cout << " Form is removed" << endl;
}

double Cart:: calcTotal ()
{
	total+=ChargesOfForm;
	return total;
}

void Cart :: displayTotal ()
{
	cout<<" Total" << calcTotal () << endl;
}

void Cart::Cart()
{
 cout << "deleted" << endl;
}