//function:- function is a block of code that performs specific task....
#include <iostream>
using namespace std;
void addition ()
{
    int a, b, c;
    cout << "enter a : ";
    cin >> a; // 5
    cout << "enter b : ";
    cin >> b; // 8

    c = a + b;

    // cout << "addition = " << c;

    cout << "sum of " << a << " and " << b << " = " << c;

}
int main ()
{
    cout << "hello im main" << endl;
    addition();
    cout << "main function is end" << endl;
    return 0;


} 
