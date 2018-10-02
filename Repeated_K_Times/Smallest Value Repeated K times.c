#include <stdio.h>
 
int main()//main
{   int a[100005],count[100005],n,i,j,temp,k,var;
    scanf("%d",&n);
 
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
 
    scanf("%d",&k);
    for(j=0;j<n;j++)
    {
        var=a[j];
        count[var]++;
    }
    for(i=0;i<100005;i++)
    {
        if(count[i]==k)
        {
            printf("%d",i);
            break;
        }
    }
    return 0;
}
