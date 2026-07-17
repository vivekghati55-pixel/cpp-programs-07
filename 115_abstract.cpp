// when we make a function inside class with virtual keyword and without body only declare return type, function name, no of parameter 
// but not make body of fucnction. we assign 0 value on fuction declartation so that fuction is called pure virtual function...


// abstract class:- when  a class have one or more than one virtual function inside it so that class become abstract class. we can not make 
// object of abstract class....


#include<iostream>
using namespace std;
class shape // abstract class
{
    public:
  float radius;
  virtual void calculatearea()=0; // pure virtual function.....
  void setradius(float r)
  {
     radius=r;
  }
};
class circle:public shape    //class inherite
{
    public:
    void calculatearea() // method override.....
    {
        cout<<"calculate info: "<<endl;
        cout<<"Area of circle: "<<3.141*radius*radius<<endl;
        cout<<"-----------------"<<endl;

    }
};
class sphere:public shape  // class inherite
{
    public:
    void calculatearea() // method override......
    {
        cout<<"calculate info: "<<endl;
        cout<<"Area of Sphere: "<<4*3.141*radius*radius<<endl;
         cout<<"-----------------"<<endl;

    }
};
class cylender:public shape  // class inherite
{
    public:
    void calculatearea() // method override.......
    {
        cout<<"calculate info: "<<endl;
        cout<<"Area of cylender: "<<2*3.141*radius*radius+2*3.141*radius*radius<<endl;
         cout<<"-----------------"<<endl;
    }
};
int main ()
{
 circle c1;
 c1.setradius(4.5);
 c1.calculatearea();

 sphere s1;
 s1.setradius(5.6);
 s1.calculatearea();

 cylender cy1;
 cy1.setradius(6.1);
 cy1.calculatearea();
 return 0;
}