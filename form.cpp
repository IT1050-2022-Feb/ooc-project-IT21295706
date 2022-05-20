#include "Forms.h" 
#include <cstring> 
#include <iostream> #include <iomanip> using namespace std; Forms::Forms() 
{ 
} 
Forms::Forms(int id, int q, int fid, char const fName[], char const pDes[], int qa,double up) 
{ 
 FormsID = id;     
 quantity = q;     
 unitprice = up; 
    //creating objects from Cart class     
cart[0] = new Cart(fid, fName, pDes, qa, up); 
} 
   
void Forms::Forms () 
{ 
 
    cout << "ID : " << formsID << endl;   
 cout << "Quantity : " << quantity << endl;      } 
 
Forms::Forms() 
{ 
    cout << "Form is deleted" << endl; 
    for (int i = 0; i < 2; i++) 
    { 
        delete cart[i]; 
    } 
} 
