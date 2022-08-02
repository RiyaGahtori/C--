/* 
#include<iostream> -> A file named iostream alredy exist. 
 iostream(Header file) => 'iostream' helps in input, ouput.

int main -> 
 int  => Integer. 'int' is return type.
 main => A function. 'main' is the entry point of the program.
 ()   => it represents funtion.

{} -> {body}

std::cout<<""; -> inside standard namespace a function named 'cout' is defined in imported header file(i.e. iostream).
 cout => it is a funtion
 std => Standard. 
 << => syntax to print the string inside "".
*/

#include <iostream>
using namespace std;
int main() {
   cout << "Hello, World!" << endl; 
   return 0;
}


