#include<iostream>
using namespace std;
int main ()
{
    int arr[3]={12,35,78};
    int *ptr;
 
    // ptr=&arr[0];                            ptr me address store karte hai
    ptr=&arr[0];

    printf("%d\n",*ptr);
    
    ptr++;

    printf("%d\n",*ptr);

    ptr++;

    printf("%d\n",*ptr);

    
 
 return 0;
}