#include<iostream>
using namespace std;
int add(int a, int b)
{
   int c=a+b;
    return c; 
}
string fullname (string name, string surname)
{
    string s1;
    s1 =name +" "+ surname;
    return s1;
}
char uppercase(char ch)
{
   return ch - 32;
   
}
float areacircle(float radius)
{
    3.141 *radius*radius;
    return 0;
}
int factorial(int num)
{
    int i,fact=1;
    for(i=1; i<=num; i++)
    {
        fact = fact * i;
    }
    return fact;
}
    
int main ()
{
 cout<< "factorial : " <<factorial(5)<<endl;
 cout<< "factorial : " <<factorial(4)<<endl;

 cout<< "areaofcircle : " <<areacircle(3.4) <<endl;
 cout<< "uppercase : " <<uppercase('h')<<endl;

 cout<< "fullname : "<<fullname("vivek","ghati")<<endl;

 cout<< "addition"<<add(6,12)<< endl;

 add(34,56);
}