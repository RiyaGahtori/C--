/*                                                        Variable Scope 
                                                         ----------------
~ Scope of the variable is the region in code where the existence of variable is valid.

~ Based on Scope, variable can be classified into two types:
1. Local Variables   : Local variable are declared inside the braces of any function and can be accessed only from there.
2. Gloabal Variables : Global variables are declared outside any function and can be accessed from anywhere.
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*

Que.-> Can global and local variable have same name in C++? : Yes.
Que.-> If there is a variable inside a function with the same name as that of a global variable and if the function tries to access the variable with that name, 
then which variable will be given precedence? Local variable or Global variable? : local variable                                                                                   
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

//What if there exists a local variable with the same name as that of global variable inside a function?
#include<iostream>
using namespace std;
 
// global variable
int global = 5;
 
// main function
int main()
{  
    // local variable with same name as that of global variable 
    int global = 2;
    cout << global << endl;
}
/*
The variable “global” declared at the top is global and stores the value 5 where as that declared within main function is local and stores a value 2. 
So, the question is when the value stored in the variable named “global” is printed from the main function then what will be the output? 2 or 5?

=> Usually when two variable with same name are defined then the compiler produces a compile time error. But if the variables are defined in different scopes then the compiler allows it.
=> Whenever there is a local variable defined with same name as that of a global variable then the compiler will give precedence to the local variable.
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

