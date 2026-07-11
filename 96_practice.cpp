// operator overloading..

#include<iostream>
using namespace std;
class complex
{
   int real;
   int image;

   public:
   complex() {}
   complex(int a ,int b) 
   {
        real=a;
        image=b;
   }
   void getcomplex()
   {
    cout<< "complex number: ("<<real<<"+"<<image <<"i)"<<endl;
   }
   complex operator+(complex obj)
   {
          complex res;
          res.real=real+obj.real;
          res.image=image+obj.image;
          return res;
   }
   complex operator-(complex obj)
   {
          complex res;
          res.real=real-07obj.real;
          res.image=image-obj.image;
          return res;
   }
};
int main ()
{
 complex c1(12,6),c2(6,5),c3,c4;
 c1.getcomplex();
 c2.getcomplex();
 c3=c1+c2;
 c3.getcomplex();
 c4=c1-c2;
 c4.getcomplex();
 return 0;
}