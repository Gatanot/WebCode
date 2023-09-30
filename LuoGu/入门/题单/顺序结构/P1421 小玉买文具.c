#include <stdio.h>
int main(void)
{
    int a = 0, b= 0;
    scanf("%d %d", &a, &b);

    printf("%d", ((a*10+b)/19));

    return 0;
}