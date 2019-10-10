#include <stdio.h>
int recursive_fact(int n){
    if(n == 0)return 1;
    else return recursive_fact(n-1)*n;
}

void main()
{
	int a ;
	 scanf("%d", &a);
	
    int res = recursive_fact(a);

	printf("%d", res);
}