/*
There are three types of control structures available in C and C++ :
    1) Sequence structure (straight line paths)
    2) Selection structure (one or many branches)
    3)Loop structure (repetition of a set of activities)
-------------------------------------------------

1. if-else statement 
  ------------------- 
int i = 0;
if(i<3)
{
    cout<<i;
    i++;
}  

2. if-else ladder  
  ----------------- 


3. switch case
  ---------------
switch(expression)
{
    case 1:
    {
        action1;
    }

    default:
    {
        action 4;
    }
}
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

#include<iostream>
using namespace std;

int main()
{
    //Sequence  Structure
    cout<<"Sequence  Structure"<<endl;
    cout<<"--------------------"<<endl;
    int A = 0;
    cout<<"The value of A is : "<<A<<endl;
    cout<<" "<<endl;
    

    //Selection Structure
    cout<<"Selection Structure"<<endl;
    cout<<"--------------------"<<endl;
    int age;
    cout<<"Tell me your age : ";
    cin>>age;
    cout<<endl;
    if((age<18) && (age>0))
    {
        cout<<"Sorry! You can't come to my party"<<endl;
    }
    else if(age==18)
    {
        cout<<"Yaay! You will get a KID PASS for the party"<<endl;
    }
    else if(age<=0)
    {
        cout<<"Error!";
    }
    else
    {
        cout<<"You can come to the party"<<endl;
    }
    cout<<" "<<endl;
    return 0;
}