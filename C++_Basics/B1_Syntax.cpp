/*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include<iostream>     -> A file named iostream alredy exist. 
 iostream(Header file) => 'iostream' helps in input, ouput. The C++ language defines several headers, which contain information that is either necessary or useful to the program. 
 For this program, the header <iostream> is needed.

using namespace std;   -> tells the compiler to use the std namespace. 

int main -> int main() is the main function where program execution begins.
 int  => Integer. 'int' is return type.
 main => A function. 'main' is the entry point of the program.
 ()   => it represents funtion.

{} -> {body}, A block is a set of logically connected statements that are surrounded by opening and closing braces.
;  -> The semicolon is a statement terminator. i.e, each individual statement must be ended with a semicolon. It indicates the end of one logical entity.

cout << "Hello World"; -> causes the message "Hello World" to be displayed on the screen.
 cout => it is a funtion.
 <<   => syntax to print the string inside "".

return 0; -> terminates main( )function and causes it to return the value 0 to the calling process.
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Steps to save the file, compile and run the program -
=> Save the file as    : hello.cpp
=> To compile the code : g++ hello.cpp (If there are no errors in the code, the command prompt will take you to the next line and would generate a.out executable file.)
=> To run the program  : ./a.out
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

                                    /*-------------------------------- My First C++ Program --------------------------------*/
#include <iostream>
using namespace std;
 
// main() is where program execution begins.
int main()
{
    cout << "Hello World!";// prints Hello World
}
