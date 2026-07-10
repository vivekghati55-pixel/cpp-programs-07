#include <iostream>
using namespace std;
struct student
{
    string name;
    int rno;
    float per;
};
int main()
{
    student s1,s2;
    s1.name="vivek";
    s1.rno=41;
    s1.per=77.70;

    s2.name="badal";
    s2.rno=42;
    s2.per=80.40;

    cout<< "student 1 info :" << endl;
    cout<< "name : " << s1.name <<endl;
    cout<< "rno : " << s1.rno << endl;
    cout<< "per : " << s1.per<<endl;

    cout<<"--------------------------"<<endl;

    cout<< "student 2 info :" << endl;
    cout<< "name : " << s2.name <<endl;
    cout<< "rno : " << s2.rno << endl;
    cout<< "per : " << s2.per<<endl;



}