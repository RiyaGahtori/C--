/*                                                                 Data Types
                                                                 ---------------
~ Data types define the type of data a variable can hold, For e.g. an integer variable can hold integer data, a character type variable can hold character data, etc.

~ Data types in C++ are categorised in three groups:
a. Built-in      :  1. int     : -1, 0, 1, 21   [Integer value]
                    2. Float   :  1.21, 1.111   [Decimal numbers of low precision]
                    3. Char    :  'd', 'w', 'i' [Character values]
                    4. Doublle :  1.2111111111  [Decimal numbers of high precision]
                    5. Bool    :  True or False [Boolean value]

b. User-defined  :  1. Struct
                    2. Union
                    3. Enum

c. Derived       :  1. Array
                    2. Function
                    3. Pointer
*/

#include <iostream>
using namespace std;

int main ()
{
    // int a = 21;
    // int b = 99;
    int a = 21, b = 99;
    float pi = 3.14;
    char c = 'r';
    bool riri = true; //1 = true, 0 = false

    cout<<"The value of a is : "<<a<<"\nThe value of b is : "<<b;
    cout<<"\nThe value of pi is : "<<pi;
    cout<<"\nThe value of c is : "<<c;
    cout<<"\nThe value of riri is : "<<riri;

    return 0;
}