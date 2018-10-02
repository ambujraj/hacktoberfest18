#include <stdio.h>

int fib(int n)
{
	return (n == 1 || n == 2)?1:fib(n-1)+fib(n-2);
}

int main(int argc, char const *argv[])
{
	int n;
	printf("Enter the fibonacci term you want to print: ");
	scanf("%d", &n);
	printf("%d fibonacci term is %d\n",n, fib(n));
	return 0;
}