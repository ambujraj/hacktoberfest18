/* Factorial is the product of an integer and all the integers below it till 1; 
   e.g. factorial four ( 4! ) is equal to 24.
*/

#include <stdio.h>

void main() {
	int a, res = 1;
	
	scanf("%d", &a);
	
	while(a){
		res *= a;
		a--;
	}

	printf("%d\a", res);
}
