#include <stdio.h>
int main(void)
{
    int h, r;
    scanf("%d %d", &h, &r);
    double num;
    num = h * r * r * 3.14;
    printf("%d", ((int)(20000 / num)) + 1);
}