#include<iostream>
using namespace std;
int main ()
{
  int *ptr=new int;
  *ptr=75;
 cout<<"value: "<<*ptr<<endl;

 if(*ptr%2==0)
 {
    cout<<"num is even: "<<endl;
 }
 else{
    cout<<"num is odd: "<<endl;
 }
  delete ptr;
 return 0;
}