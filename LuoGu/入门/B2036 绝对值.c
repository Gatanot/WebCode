#include <stdio.h>

int main(void)
{
    float n;
    scanf("%f", &n);
    if (n < 0)
    {
        n = -n;
    }
    else
    {
        ;
    }
    printf("%.2f",n);
    return 0;
}
