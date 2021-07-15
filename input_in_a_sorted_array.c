#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

typedef long long int ll;

int main()
{
	ll n,i,j,k;
	scanf("%lld",&n);
        ll a[n+1];
        //inputting a sorted array
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
        }
        ll insert;
        scanf("%lld",&insert);
        for(i=n-1;i>=0;i--)
        {
            if(a[i]>insert)
            {
                a[i+1]=a[i];
            }
            else
            {
                a[i+1]=insert;
                break;
            }
        }
        for(i=0;i<=n;i++)
        {
            printf("%lld\n",a[i]);
        }
        return 0;
}
