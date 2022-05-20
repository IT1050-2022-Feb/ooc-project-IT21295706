#pragma once
Class Cart
{
	private:
		int FormID;
		char FormName;
		int quantity;
		double ChargesOfForm;
		
	public:
		double total=0;
		Cart ( int FID, char const FName, int q, double c);
		
	void addForms ();
	void removeForms ();
	double calcTotal ();
	void displayTotal ();
	Cart ();
	
};
