#include<iostream>
using namespace std;
class student
{
    string name;
    int rno;
    float per;
     public:
     void setstudent(string n,int r,float p)
     {
        name=n;
        rno=r;
        per=p;
     }
     void getstudent()
     {
        cout<< " student info : "<< endl;
        cout<< " name : "<< name << endl;
        cout<< " rno : "<<rno << endl;
        cout<< " per : "<< per << endl;
        cout<<"------------------------------"<<endl;
     }
};
int main ()
{
 student s1,s2,s3;
 s1.setstudent("vivek ghati",41,77.70);
 s2.setstudent("badal ghati",42,80.10);
 s3.setstudent("mohan lomte",43,85.50);

 s1.getstudent();
 s2.getstudent();
 s3.getstudent();
 return 0;
}