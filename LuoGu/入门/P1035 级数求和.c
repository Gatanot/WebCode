#include <stdio.h>

int main(void)
{
    int k = 0, count = 0;
    scanf("%d", &k);
    double sum = 0;
    for (double i = 1; sum <= (double)k; i++)
    {
        sum = sum + (1 / i);
        count++;
    }
    printf("%d", count);
    
    return 0;
}