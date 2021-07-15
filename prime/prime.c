// C Program to find out if a number is prime or not
#include <stdio.h>

int main()
{
    int num, flag = 0, i;

    printf("Enter a number: ");
    scanf("%d",&num);

    // Incrementing flag if the number is divisible
    for(i=1; i<=num; i++)
    {
        if(num % i == 0)
            flag++;
    }

    // Checking if the number is divisible only two times, i.e., prime
    if(flag == 2)
        printf("The number is prime\n");
    else
        printf("The number is not prime\n");

    return 0;
}