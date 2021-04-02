#include <iostream>
using namespace std;

int main() 
{    
   int a,b,c;
    cout << "Size of char: " << sizeof(char) << " byte" << endl;
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    cout<<"Enter two numbers:\n"<<endl;
    cin<<&a,&b;
     c=a*b;
    cout<<" product of two numbers are:"<<c;
    return 0;
}
