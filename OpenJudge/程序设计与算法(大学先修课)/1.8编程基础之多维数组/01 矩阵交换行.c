#include <stdio.h>

int main(void)
{
    int numlsit[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &numlsit[i][j]);
        }
    }
    int m = 0, n = 0;
    scanf("%d %d", &m, &n);
    for (int i = 0; i < 5; i++)
    {
        int temp = 0;
        temp = numlsit[m - 1][i];
        numlsit[m - 1][i] = numlsit[n - 1][i];
        numlsit[n - 1][i] = temp;
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", numlsit[i][j]);
            if (j == 4)
            {
                printf("\n");
            }
        }
    }

    return 0;
}