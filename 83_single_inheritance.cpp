#include<iostream>
using namespace std;
class emp
{
 int id;
 float salary;
  
public:
 void setemp(int i, float s)
 {
    id = i;
    salary=s;
 }
 void getemp()
 {
    cout<<"Emp info : \n";
    cout<<"id : "<< id << endl;
    cout<<"salary: "<< salary << endl;

 }
};
class programer : public emp
{
    string lang;
    string project;

    public:
       void setprogram(string l, string p)
       {
        lang=l;
        project=p;
       }
       void getprogram()
       {
        cout<<"lang :"<< lang <<endl;
        cout<<"project :"<< project <<endl; 
       }
    };
int main ()
{
    programer p1,p2;
    p1.setemp(101,45000);
    p1.setprogram("python","music player");
    p1.getemp();
    p1.getprogram();
return 0;
}