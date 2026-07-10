#include<iostream>
using namespace std;
void addition()
{
    int a,b,c;
    cout<< "enter a number : " <<endl;
    cin>> a;
    cout<< " enter a number : " <<endl;
    cin>> b;
    c=a+b;
    cout<< "addition = "<<c <<endl;
}
int main ()
{
    cout<<"program is started : "<<endl;
    addition();
    cout<<"program is end : "<< endl;
 
 return 0;
}