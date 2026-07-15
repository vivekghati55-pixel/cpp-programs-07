#include<iostream>
using namespace std;
int main ()
{
    int *ptr1=new int;               //new int :- new memory ke liye likhte hai dynamic memmory....
    *ptr1=07;

    float *ptr2=new float;
    *ptr2=34.50;

    cout<<"value 1: "<<*ptr1<<endl;
    cout<<"value 2: "<<*ptr2<<endl;

    delete ptr1;
    delete ptr2;

    
 return 0;
}