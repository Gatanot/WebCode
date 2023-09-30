#include <stdio.h>

int main(void)
{
    int num[2];
    int day = 0, sum = 0;
    for (int i = 0; i < 7; i++)
    {
        scanf("%d %d", &num[0], &num[1]);
        if (((num[1] + num[0]) > 8) && ((num[1] + num[0]) > sum))
        {
            day = i + 1;
            sum = num[0] + num[1];
        }
    }
    printf("%d", day);

    return 0;
}