//Program to generate prime numbers less than or equal to n (n < 100000). This is an O(n) algorithm. This algorithm is called Sieve_of_Eratosthenes (https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes)

#include<bits/stdc++.h>
#define lli long long int //macros
#define loop(a,b) for(lli i=a;i<b;i++)

using namespace std;
int main()
{
    cout<<"Enter value of n: ";
    lli n; //thee number till which you want to generate primes
    cin>>n;

    bool marked[n+1]; //a boolean array to mark the indexes of array. Indexes are treated as numbers. Ex. if marked[2] = 1, this means
    //that 2 is a prime number.

    loop(2,n+1) //initially  mark all numbers till n as non primes.
    {
        marked[i]=0;
    }

    lli inc,num,start,i=0;
    num=2;
    inc=2;
    start=2;

    while(inc <= n) //this loop takes all the unmarked numbers and mark their multiples as non-primes.
    {
        inc = start;
        num=2*inc;
        while(num<=n)
        {
            if(!marked[num])
                marked[num]=1;
            num+=inc;
        }
        i=start+1;
        while(marked[i] && i<=n)
        {
            i++;
        }
        start=i;
    }

    i=2;
    cout<<"All prime numbers less than equal to "<<n<<": \n";
    while(i<=n) //print all primes.
    {
        if(!marked[i])
            cout<<i<<" ";
        i++;
    }
    return 0;
}
