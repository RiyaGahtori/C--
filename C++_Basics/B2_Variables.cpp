/*                                                      VARIABLES IN C++
                                                       ------------------
~ A Variable is a container to hold data. 

~ Variable can be of various types. Primarily we have these variable type in C++ :
1. int     : -1, 0, 1, 21
2. Float   :  1.21, 1.111
3. Char    :  'd', 'w', 'i'
4. Doublle :  1.2111111111
5. Boolean :  True or False 

~ int sum  =  21; means sum is an integer variable which holds value 21 in memory.
~ Syntax   :  Data_type  Variable_name = Value;   [int riri = 21;]

-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

//C++ program to show difference b/w definition and declaration of a variable 
#include <iostream>
using namespace std;
 
int main()
{
      // this is declaration of variable a
      int a;
      // this is initialisation of a
      a = 10;
      // this is definition = declaration + initialisation
      int b = 20;
   
    // declaration and definition of variable 'a123'
    char a123 = 'a';
 
    // This is also both declaration and definition as 'c' is allocated memory and assigned some garbage value.
    float c;
 
    // multiple declarations and definitions
    int _c, _d45, e;
 
    // Let us print a variable
    cout << a123 << endl;
 
    return 0;
}

/*---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
-> Variable names in C++ can range from 1 to 255 characters.
-> All variable name must begin with a letter of the alphabet or an  underscore(_).
-> After the first initial letter, variable names can also contain letters and numbers.
-> Variable names are case sensetive.
-> No spcaes or special characters are allowed.
-> You cannot use C++ keyword(a reserve word) ass a variable name.
*/