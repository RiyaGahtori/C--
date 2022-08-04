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
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

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

/*----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
                                        DATA TYPE, SIZE AND RANGE IN C++  (FOR g++ 64 BIT)

        DATA TYPE                                   SIZE (IN BYTES)                                   RANGE
       -----------                                 -----------------                                 -------
       short int                                           2                                   -32,768 to 32,767
       unsigned short int                                  2                                         0 to 65,535
       unsigned int                                        4                                         0 to 4,294,967,295
       int                                                 4                            -2,147,483,648 to 2,147,483,647
       long int                                            4                            -2,147,483,648 to 2,147,483,647
       unsigned long int                                   4                                         0 to 4,294,967,295
       long long int                                       8                                   -(2^63) to (2^63)-1
       unsigned long long int                              8                                         0 to 18,446,744,073,709,551,615
       signed char                                         1                                      -128 to 127
       unsigned char                                       1                                         0 to 255
       float                                               4
       double                                              8
       long double                                         12
       wchar_t                                           2 or 4                                    1 wide character
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

       