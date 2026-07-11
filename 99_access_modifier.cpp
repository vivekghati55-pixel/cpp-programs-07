// access modifier private example:- private fakt swata cya class madhe ch access hot.. 

#include<iostream>
using namespace std;
class base
{
   string name="vivek";
   int mno;
   string add="ashti";

   public:
   void display()
   {
     cout<< "name: "<<name<<endl;
     cout<< "mno: "<<mno<<endl;
     cout<< "add: "<<add<<endl;
     cout<<"-------------------"<<endl;
   }
};
class star 
{
  public:
  void clip()
  {
  }
};

int main ()
{
 base s1;
 s1.display();
 return 0;
}