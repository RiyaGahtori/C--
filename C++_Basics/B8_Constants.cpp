#include<iostream>
using namespace std;

int mian()
{
    //Variable 'a'
    int a = 34;
    cout<<"The value of a was : "<<a<<endl;
    a = 21;
    cout<<"The value of a is  : "<<a<<endl;
/*-----------------------------------------------------------------------------*/
   
    //Constant
    const int b = 2;
    cout<<"The value of b was : "<<b<<endl;
/*  b = 6; --> error : assignment of read-only variable 'b'; 
    cout<<"The value of b  is : "<<b<<endl;                   */

    return 0;
}