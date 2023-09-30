#include <stdio.h>

int main(void)
{
    int num = 0;
    scanf("%d", &num);
    int numlist[num];

    for (int i = 0; i < num; i++)
    {
        scanf("%d", &numlist[i]);
    }
    for (int i = 0; i < num; i++)
    {
        int count = 0;
        for (int j = 0; j <= i; j++)
        {

            if (numlist[j] < numlist[i] && j != i)
            {
                count++;
            }
        }
        printf("%d ", count);
    }

    return 0;
}
