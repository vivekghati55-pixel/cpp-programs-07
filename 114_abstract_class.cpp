// pure virtual fun:- when we declare a function as pure virtual function then the class is called abstract class. we can not create 
// object of abstract class. but we can create pointer of abstract class. and we can use that pointer to access the derived class method.

#include<iostream>
using namespace std;
class vivek           // abstract class
{
    public:
    virtual void pro(int a,int b)=0;   // pure virtual function....
    virtual void noob()=0;             // pure virtual function....
    void display()
    {
        cout<<"base class called"<<endl;
    }
};
class badal :public vivek       // class inherite.....
{
   public:
   void pro(int a , int b)      // method override
   {
      cout<<a+b<<endl;
      cout<<"vivek is override: "<<endl;
   }
   void noob()                  // method override......
   {
    cout<<"noob s override: "<<endl;
   }
   void mymethod()              
   {
    cout<<"badal method..."<<endl;
   }
};
int main ()
{
// abstract class cha object create nhi krta yet
// mhanun aapn inherite karto then override krto....

 badal s1,s2;
 s1.pro(12,76);
 s1.noob();
 s1.mymethod();
 s1.display();


 return 0;
}