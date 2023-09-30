#include <stdio.h>

int main(void)
{
    int n;
    long num = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        num *= 2;
    }
    printf("%ld",num);

    return 0;
}
