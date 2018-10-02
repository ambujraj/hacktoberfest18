#include<bits/stdc++.h>
using namespace std;

#define N 50

void funcO(int n);

void funcE(int n)
{
    if (n<=N)
    {
        cout<<"Even number:"<<n<<endl;
        funcO(n+1);
    }
}

void funcO(int n)
{
    if (n<=N)
    {
        cout<<"Odd number:"<<n<<endl;
        funcE(n+1);
    }
}

int main()
{
    funcO(1);
}
