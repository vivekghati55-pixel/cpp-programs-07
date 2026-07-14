#include<iostream>
using namespace std;

int main ()
{
 int arr[5];
 int *ptr;

 ptr=&arr[0];

 cout<<"array elements are: ";
 int i;
 for(i=0;i<5;i++)
 {
    cin>>*ptr;
    ptr++;
 } 

 ptr=&arr[0];

 cout<<"array elements display by pointer: ";
 for(i=0;i<5;i++)
 {
    cout<<*ptr<< " ";
    ptr++;
 }
 return 0;
}