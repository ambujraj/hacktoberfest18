#include <stdio.h>
#include <stdlib.h>

#include<bits/stdc++.h>
using namespace std;
int main()
{

    int x,y,z;
    printf("Enter Array size=");
    scanf("%d",&x);
    int arr[x];
    for(y=0;y<x;y++)
    {
        printf("Enter %d element=",y);
        scanf("%d",&arr[y]);
    }
    int key;
    printf("Enter the search key=");
    scanf("%d",&key);

    for(y=0;y<x;y++)
    {
        if(key==arr[y])
            printf("Search key Location=arr[%d]",y);


    }


    return 0;
}
