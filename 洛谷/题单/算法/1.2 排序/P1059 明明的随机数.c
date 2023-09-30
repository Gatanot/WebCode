#include <stdio.h>

int main(void)
{
    int num = 0, count = 0;
    scanf("%d", &num);
    int numlist[num], turelist[num];
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &numlist[i]);
        int judge = 1;
        for (int j = 0; j <= i; j++)
        {
            if (numlist[j] == numlist[i] && i != j)
            {
                judge = 0;
                break;
            }
        }
        if (judge)
        {
            turelist[count] = numlist[i];
            count++;
        }
    }
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = 0; j < count - 1 - i; j++)
        {
            if (turelist[j] > turelist[j + 1])
            {
                int temp = turelist[j];
                turelist[j] = turelist[j + 1];
                turelist[j + 1] = temp;
            }
        }
    }
    printf("%d\n", count);
    for (int i = 0; i < count; i++)
    {
        printf("%d ", turelist[i]);
    }

    return 0;
}
