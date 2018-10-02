#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter the lower range for your random number :";
    cin>>a;
    cout<<"Enter the upper range for your random number :";
    cin>>b;
    c=a + rand()%b;
    cout<<"here is your random number :"<<c;

    return 0;
}
