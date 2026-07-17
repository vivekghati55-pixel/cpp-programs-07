// Template:- template is a blue print of class like class is a blueprint of object when we make template so its avoid repeatation of same 
// class structure for different data types., we make only one class template type and that class is used for diffent data types..

// aapn template jr object madhe different data type pathavayche punha class banvun object ne deu shakto code punha punha lihava 
// lagto mhanun aapan TEMPLATE cha use karto ekach class madhe dffeent data type parameters deu shakto.. process--> template <class t,class t>

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
    cout<<"sum of set1+set2: "<<set1+set2<<endl;
    cout<<"------------------------"<<endl;
  }
};

int main ()
{
    base <int> s1;
    s1.setdata(98,876);
    s1.getdata();

    base <float> s2;
    s2.setdata(51.2,5.40);
    s2.getdata();

    base <string> s3;
    s3.setdata("vivek","ghati");
    s3.getdata();

    base <char> s4;
    s4.setdata('V','G');   //character madhe tyacya ASCII code chi sum karte... 
    s4.getdata();

 return 0;
}