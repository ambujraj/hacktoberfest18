#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

typedef long long int ll;

int main()
{
	ll n,i,j,k;
	scanf("%lld",&n);
        ll a[n];
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    ll swap=a[i];
                    a[i]=a[j];
                    a[j]=swap;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            printf("%lld\n",a[i]);
        }
        return 0;
}
