#include <stdio.h>
int main()
{
    int start, end, i, flag;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers between %d and %d are: ", start, end);

    while (start < end)
    {
        flag = 0;

        for(i = 2; i <= start/2; ++i)
        {
            if(start % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            printf("%d ", start);

        ++start;
    }

    return 0;
}
