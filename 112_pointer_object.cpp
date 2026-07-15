#include<iostream>
using namespace std;
class emp
{
    int id;
    int sal;

    public:
    void setEmp(int n,int s)
    {
      id=n;
      sal=s;
    }
    void displayEmp()
    {
        cout<<"Emp info:  "<<endl;
        cout<<"id: "<<id<<endl;
        cout<<"salary: "<<sal<<endl;
        cout<<"-------------------------"<<endl;
    }
};
int main ()
{
//  emp e1,e2;
 emp *ptr;
 emp e1;
 ptr=&e1;


//  e1.setEmp(41,25000);
//  e1.displayEmp();
//  e2.setEmp(42,15000);
//  e2.displayEmp();

// (*ptr).setEmp(41,25000);
// (*ptr).displayEmp();

// arrow operator                            eska use jyada hota hai arrow operator.......
ptr->setEmp(41,25000);
ptr->displayEmp();

 return 0;
}