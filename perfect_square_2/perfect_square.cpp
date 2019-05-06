#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int a,b;
    cout<<"Enter the number : ";
    cin>>a;
    b = sqrt(a);
    if(a == pow(b,2))
    {
        cout<<"Perfect square."<<endl;
    }
    else{
        cout<<"Not a perfect square."<<endl;
    }
    return 0;
}
