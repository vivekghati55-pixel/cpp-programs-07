// Template:- template is a blue print of class like class is a blueprint of object when we make template so its avoid repeatation of same 
// class structure for different data types., we make only one class template type and that class is used for diffent data types..

// aapn template jr object madhe different data type pathavayche punha class banvun object ne deu shakto code punha punha lihava 
// lagto mhanun aapan TEMPLATE cha use karto ekach class madhe dffeent data type parameters deu shakto.. process--> template <class t,class t>

//  note:- by default jr likes (int,float,char,double,string) thevlay tr data type pass nhi kela tri to by default set rahil like (int,float,char,double,string)
// aani as kahi nhi ki by default kel tr aapn return type pass nhi kru shakt kru shakto ani je pass keli tyala first priority bhetnar jr kahi ch pass 
// hi kel tr by default like(int,float,string,char,double)yatil kont pn ek by fault set asnar tri pn execute honar error nhi yenar

#include<iostream>
using namespace std;
template <class t, class t1=string> // by default set
class base
{
  t set1;
  t1 set2;

  public:
  void setdata(t a,t1 b)
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
    base <string,int> s1;
    s1.setdata("vivek",41);
    s1.getdata();

    base <float,int> s2;
    s2.setdata(76.77,50);
    s2.getdata();
    
    base <float,char> s3;
    s3.setdata(76.77,'v');
    s3.getdata();
    
    base <int> s4;
    s4.setdata(41,"vivek"); // by default string set ahet mhanun error nhi yet.
    s4.getdata();

 return 0;
}