#include <stdio.h>

int main(void)
{
    long num;
    scanf("%ld", &num);
    if (num > 0)
    {
        printf("positive");
    }
    else if (num < 0)
    {
        printf("negative");
    }
    else
    {
        printf("zero");
    }

    return 0;
}
