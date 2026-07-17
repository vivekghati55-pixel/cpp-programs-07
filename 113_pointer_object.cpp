#include<iostream>
using namespace std;
class emp
{
    string name;
    float sallary;
    public:
    void setEmp(string n,float s)
    {
        name=n;
        sallary=s;
    }
    void displayEmp()
    {
        cout<<"Emp info:  "<<endl;
        cout<<"name: "<<name<<endl;
        cout<<"sallary: "<<sallary<<endl;
        cout<<"-------------------------"<<endl;
    }
};
int main ()
{
    emp *ptr=new emp;
    ptr->setEmp("vivekk",12500);
    ptr->displayEmp();
    
    delete ptr;
 
 return 0;
}
