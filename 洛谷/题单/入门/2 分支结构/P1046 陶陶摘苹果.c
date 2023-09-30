#include <stdio.h>

int main(void)
{
    int tall[10], weight = 0, count = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &tall[i]);
    }
    scanf("%d", &weight);
    for (int i = 0; i < 10; i++)
    {
        if ((weight + 30) >= tall[i])
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}