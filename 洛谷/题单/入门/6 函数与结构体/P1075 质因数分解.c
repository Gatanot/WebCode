#include <stdio.h>

int main(void)
{
    long num = 0;
    scanf("%ld", &num);
    for (long i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            printf("%ld", (num/i));
            break;
        }
    }

    return 0;
}