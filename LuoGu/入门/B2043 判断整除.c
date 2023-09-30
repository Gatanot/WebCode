#include <stdio.h>

int main(void)
{
    int x;
    scanf("%d", &x);
    int numlist[3][2] = {{3, 0}, {5, 0}, {7, 0}};
    if (x % 3 == 0)
    {
        numlist[0][1] = 1;
    }
    if (x % 5 == 0)
    {
        numlist[1][1] = 1;
    }
    if (x % 7 == 0)
    {
        numlist[2][1] = 1;
    }
    int mark = 1;
    for (int i = 0; i < 3; i++)
    {
        if (numlist[i][1])
        {
            printf("%d ", numlist[i][0]);
            mark = 0;
        }
    }
    if (mark)
    {
        printf("n");
    }

    return 0;
}