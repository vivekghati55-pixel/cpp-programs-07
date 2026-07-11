#include<iostream>
using namespace std;
class base
{
    public:
    base()
    {
        cout<< "0 base fuction callled: "<<endl;
    };
    base(int a)
    {
        cout<<"1 base fun called: "<<a<<endl;
    }
    base(int a ,int b)
    {
        cout<<"2 base fun called: "<<a+b<<endl;
    }
};
class derived 
{
    public:
    derived()            //aaplya vatal tr aapn yethun pn call kru shakto.....(: ani object name ()yethe parameter pass karto suppose :derived(12,4) ).....
    {
       cout<<"0 derieved called: "<<endl;
    }
    derived(int a)
    {
       cout<<"1 derieved called: "<<a<<endl;
    }
    derived(int a ,int b)
    {
       cout<<"2 derieved called: "<<a+b<<endl;
    }
};
class derived1:public base , public derived
{
    public:
    derived1()
    {
       cout<<"0 derieved called: "<<endl;
    }
    derived1(int a)
    {
       cout<<"1 derieved called: "<<a<<endl;
    }
    derived1(int a ,int b):derived(7),base(12,5)
    {
        cout<<"2 derieved called: "<<a+b<<endl;
    }
};
int main ()
{
//  derived1 d1;
derived1 d2(12,6);
 return 0;
}


// asyach prakare aaplyala constructor called by single,multiple,multilevel,hirarichal,hybrid...