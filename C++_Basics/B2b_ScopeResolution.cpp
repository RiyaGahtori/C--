//How to access a global variable when there is a local variable with same name? : use the scope resolution operator. 

#include<iostream>
using namespace std;
  
// Global x 
int x = 0; 
   
int main()
{
  // Local x   
  int x = 10;
  cout << "Value of global x is " << ::x;
  cout<< "\nValue of local x is " << x; 
  return 0;
}