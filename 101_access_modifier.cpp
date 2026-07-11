// proctected:- he parent classs ani child class ch access kru shakte...

#include<iostream>
using namespace std;
class base
{
    protected:
    string name="~Vivekk";
    
    public:
    void display()
    {
        cout<<"name: "<<name<<endl;
    }
};
class child:public base
{
    public:
    void get()
    {
        cout<<name<<endl;
    }
};
int main ()
{
 base b1;
 b1.display();
 child p1;
 p1.get();
 return 0;
}