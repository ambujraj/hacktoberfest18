#include <stdio.h>
int main() {
int a=0,b=1,c,n,i=0;
printf("How the number upto which you want to print fibonacci series : ");
scanf("%d", &n);
printf("the fibonacci series are : \n , n);
while(n>=a){
c=a+b;
printf("%d",a);
a=b;
b=c;
}
return 0;
}
