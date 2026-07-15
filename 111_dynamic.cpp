#include<iostream>
using namespace std;
int main ()
{
 int *ptr=new int[5];
 int *temp=ptr;

 int i;
 cout<<"Enter array elements: ";
 for(i=0;i<5;i++)
 {
    cin>>(*ptr);
    ptr++;
 }

 ptr=temp;
 cout<<"array elements are: "<<"";
 for(i=0;i<5;i++)
 {
    cout<<*ptr<<" ";
    ptr++;
 }

 int sum=0;
 ptr=temp;
 for(i=0;i<5;i++)
 {
    sum=sum+*ptr;
    ptr++;
 }
 cout<<"sum of = "<<sum<<endl;

 ptr=temp;
 delete ptr;
 return 0;
}