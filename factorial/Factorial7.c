#include <stdio.h>


int main()
{
	int n; // No. for which Factorial is required
	scanf("%d", &n);
	int result = 1;

	for(int i = 1; i <= n; i++)
		result *= i;

	printf("%d\n", result);
	return 0;
}

