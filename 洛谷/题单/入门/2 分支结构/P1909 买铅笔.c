#include <stdio.h>

int main(void)
{

    int num = 0, out = 0;
    scanf("%d", &num);
    int num_price[3][2], price[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d %d", &num_price[i][0], &num_price[i][1]);
    }
    for (int i = 0; i < 3; i++)
    {
        if (num % num_price[i][0] == 0)
        {
            price[i] = (num / num_price[i][0]) * num_price[i][1];
        }
        else
        {
            price[i] = (num / num_price[i][0] + 1) * num_price[i][1];
        }
    }
    if (price[0] < price[1])
    {
        out = price[0];
    }
    else
    {
        out = price[1];
    }
    if (out < price[2])
    {
        ;
    }
    else
    {
        out = price[2];
    }

    printf("%d", out);

    return 0;
}