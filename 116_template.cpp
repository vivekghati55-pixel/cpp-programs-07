// Template:- template is a blue print of class like class is a blueprint of object when we make template so its avoid repeatation of same 
// class structure for different data types., we make only one class template type and that class is used for diffent data types..

#include<iostream>
using namespace std;
template <class t>
class base
{
  t set1;
  t set2;

  public:
  void setdata(t a,t b)
  {
     set1=a;
     set2=b;
  }
  void getdata()
  {
    cout<<"data info: "<<endl;
    cout<<"set1: "<<set1<<endl;
    cout<<"set2: "<<set2<<endl;
    cout<<"------------------------"<<endl;
  }
};

int main ()
{
    base <string> s1,s2;
    s1.setdata("vivek","ghati");
    s1.getdata();

    s2.setdata("badal", "ghati");
    s2.getdata();
 
 return 0;
}