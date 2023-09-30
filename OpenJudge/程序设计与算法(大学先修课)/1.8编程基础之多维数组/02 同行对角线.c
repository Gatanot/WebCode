#include <stdio.h>
#include <math.h>

int main(void)
{
    int n, x, y;
    scanf("%d %d %d", &n, &x, &y);
    for (int i = 1; i <= n; i++)
    {
        printf("(%d,%d) ", x, i);
    }
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        printf("(%d,%d) ", i, y);
    }
    printf("\n");
    int limitx = x, limity = y;
    while (limitx > 1 && limity > 1)
    {
        limitx -= 1;
        limity -= 1;
    }
    for (; limitx <= n && limity <= n; limitx++, limity++)
    {
        printf("(%d,%d) ", limitx, limity);
    }
    printf("\n");
    limitx = x, limity = y;
    while (limitx < n && limity > 1)
    {
        limitx += 1;
        limity -= 1;
    }
    for (; limitx >=1  && limity <= n; limitx--, limity++)
    {
        printf("(%d,%d) ", limitx, limity);
    }
    return 0;
}