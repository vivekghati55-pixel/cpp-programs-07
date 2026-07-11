// public :- aapn kuthe pn access kru shakto he baherun access krnya sathi ch yacha use krtoy..

#include<iostream>
using namespace std;
class base
{
    public:
   int num;

   public:
   void display()
   {
    cout<<"num: "<< num<<endl;
   }
};
class derived 
{
  public:
  void star()
  {
  }
};

int main ()
{
  base s1;
  s1.num=45;
  s1.display();
 
 return 0;
}