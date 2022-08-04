/*                                                           BASIC INPUT/OUTPUT IN C++
                                                            ----------------------------
-> C++ comes with libraries which helps us in performing input/output. In C++ sequence of bytes corresponding to input and output are commonly known as streams.

-> Input Stream :Direction of flow of bytes takes place from input device(for ex. Keyboard) to the main memory.
-> Output Stream : Direction of flow of bytes takes place from main memory to the output device(for ex. Display).
*/
#include<iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout<<"Enter the value of num1 : "; // '<<' is called Insertion operator.
    cin>>num1; // '>>' is called Extraction operator.

    cout<<"Enter the value of num2 : ";
    cin>>num2; 

    cout<<"The sum is "<< num1+num2;
    return 0;
}

