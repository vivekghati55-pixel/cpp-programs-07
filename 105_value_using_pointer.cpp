// value change using pointer.....

#include<iostream>
using namespace std;

int main ()
{
 
    int a=60;
    int *ptr;
    ptr=&a;

    cout<<"value of a: "<<a<<endl;

    *ptr=70;

    cout<<"value of a: "<<a<<endl;

    *ptr=500;

    cout<<"value of a: "<<a<<endl;

 return 0;
}