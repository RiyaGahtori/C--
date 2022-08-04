#include <iostream>
using namespace std;

int main()
{
    int a=21, b=6;
    cout<<"Operators in C++ : "<<endl;
    cout<<endl;
    
    //ARITHMETIC OPERATORS
    cout<<"The value of a + b is : "<<a+b<<endl;
    cout<<"The value of a - b is : "<<a-b<<endl;
    cout<<"The value of a * b is : "<<a*b<<endl;
    cout<<"The value of a / b is : "<<a/b<<endl;
    cout<<"The value of a % b is : "<<a%b<<endl;
    cout<<"The value of a ++  is : "<<a++<<endl; //21 (21+1=22)
    cout<<"The value of a --  is : "<<a--<<endl; //22 (22-1=21)
    cout<<"The value of ++ a  is : "<<++a<<endl; //22 
    cout<<"The value of -- a  is : "<<--a<<endl; //21
    cout<<endl;

    //ASSIGNMENT OPERATORS --> used to assign values to variable
    int r=21, i=2; 
    char ri = 'd';

    //COMPARISON OPERATORS
    cout<<"The value of a == b is : "<<(a==b)<<endl;
    cout<<"The value of a != b is : "<<(a!=b)<<endl;
    cout<<"The value of a >= b is : "<<(a>=b)<<endl;
    cout<<"The value of a <= b is : "<<(a<=b)<<endl;
    cout<<"The value of a > b  is : "<<(a>b )<<endl;
    cout<<"The value of a < b  is : "<<(a<b )<<endl;
    cout<<endl;

    //LOGICAL OPERATOR
    cout<<"The  value of ((a==b) && (a>b)) is : "<<((a==b) && (a>b))<<endl; //AND operator
    cout<<"The  value of ((a==b) || (a>b)) is : "<<((a==b) || (a>b))<<endl; //OR operator
    cout<<"The  value of (!(a==b))          is : "<<(!(a==b))<<endl; //NOT operator
    cout<<endl;
}