#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int a = 2, b = 1234, c = 21;
    cout<< "The value of a is : "<<a<<endl;
    cout<< "The value of b is : "<<b<<endl;
    cout<< "The value of c is : "<<c<<endl;
//------------------------------------------
    cout<< "The value of a is : "<<setw(4)<<a<<endl;
    cout<< "The value of b is : "<<setw(4)<<b<<endl;
    cout<< "The value of c is : "<<setw(4)<<c<<endl;

    return 0;
}
