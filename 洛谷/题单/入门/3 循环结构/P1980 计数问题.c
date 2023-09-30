#include <stdio.h>

int numcount(int i, int num);
int main(void)
{

    int limit = 0, num = 0, sum = 0;
    scanf("%d %d", &limit, &num);
    for (int i = 1; i <= limit; i++)
    {
        sum += numcount(i, num);
    }
    printf("%d", sum);

    return 0;
}

int numcount(int i, int num)
{
    int sum = 0;
    for (; i > 0;)
    {
        if ((i % 10) == num)
        {
            sum++;
        }
        i /= 10;
    }
    return sum;
}