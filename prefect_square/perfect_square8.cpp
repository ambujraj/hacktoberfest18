#include <bits/stdc++.h>
using namespace std;

bool isSqrt(long double n)
{
    if(n<=0)
        return false;
    if(ceil(sqrt(n)) == floor(sqrt(n)) )
        return true;
    return false;
}

int main() {
    
    ios_base::sync_with_stdio(false);
    long double n = 1000000;
    
    
    if(isSqrt(n))
        cout << fixed << setprecision(2) << n << " Is perfect square\n";
    else
        cout << fixed << setprecision(2) << n << " Is not perfect square\n";
    
    
    return 0;
}