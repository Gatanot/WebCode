#include <stdio.h>
int main(void)
{
    long x = 0, n = 0, day0 = 0, day = 0;
    scanf("%ld %ld", &x, &n);
    long num = n - (7 - x)-1;
    if (x == 6 || x == 7)
    {
        day0 = 0;
    }
    else
    {
        day0 = (6 - x);
    }

    if (num % 7 == 6)
    {
        day = ((num + 1) / 7) * 5 + day0;
    }
    else
    {
        day = ((num / 7) * 5) + (num % 7) + day0;
    }

    printf("%ld", day * 250);

    return 0;
}