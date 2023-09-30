#include <stdio.h>

int main(void)
{
    int a = 0, b = 0, c = 0, d = 0;

    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%d %d", (((c - a) * 60 + (d - b)) / 60), (((c - a) * 60 + (d - b)) % 60));

    return 0;
}