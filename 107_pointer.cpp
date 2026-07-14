#include<iostream>
using namespace std;
int main ()
{
    int arr[5]={56,76,35,87,76};
    int *ptr;
     
    ptr=&arr[0];
     cout<<"array element are: ";
     int i;
     for(i=0;i<5;i++)
     {
         cout<<*ptr<<" ";
         ptr++;
     }
 
 return 0;
}