#include<iostream>
using namespace std;
class student
{                           // class aapn public nhi kela tr by default private aste.
    public:                 // ani aapn baherun access karnya sathi public karav lagat.....
    string name;
    int rno;
    float per; 

};
int main ()
{
 student s1,s2,s3;
       s1.name="vivek";
       s1.rno=41;
       s1.per=77;

       s2.name="badal";
       s2.rno=42;
       s2.per=80.10;

       s3.name="nishant";
       s3.rno=43;
       s3.per=85.10;



        cout<< " student info : "<< endl;
        cout<< " name : "<< s1.name << endl;
        cout<< " rno : "<< s1.rno << endl;
        cout<< " per : "<< s1.per << endl;
        cout<<"------------------------------"<<endl;

           
        cout<< " student info : "<< endl;
        cout<< " name : "<< s2.name << endl;
        cout<< " rno : "<< s2.rno << endl;
        cout<< " per : "<< s2.per << endl;
        cout<<"------------------------------"<<endl;


        cout<< " student info : "<< endl;
        cout<< " name : "<< s3.name << endl;
        cout<< " rno : "<< s3.rno << endl;
        cout<< " per : "<< s3.per << endl;
        cout<<"------------------------------"<<endl;






 return 0;
}