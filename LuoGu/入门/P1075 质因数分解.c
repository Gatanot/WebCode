#include <stdio.h>

int main(void)
{
    int length = 0, num = 0, sum = 0;
    scanf("%d %d", &length, &num);
    int tree[num][2];
    int number[length + 1];
    for (int i = 0; i < num; i++)
    {
        scanf("%d %d", &tree[i][0], &tree[i][1]);
    }
    for (int i = 0; i < length + 1; i++)
    {
        number[i] = 1;
    }
    for (int i = 0; i < num; i++)
    {
        for (int j = tree[i][0]; j <= tree[i][1]; j++)
        {
            number[j] = 0;
        }
    }
    for (int i = 0; i < length + 1; i++)
    {
        sum += number[i];
    }
    printf("%d", sum);

    return 0;
}