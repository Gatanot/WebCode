#include <stdio.h>
#define limit1 150
#define limit2 400
#define price1 0.4463
#define price2 0.4663
#define price3 0.5663
int main(void)
{
    int elec = 0;
    float price = 0;
    scanf("%d", &elec);
    if (elec <= limit1)
    {
        price = elec * price1;
    }
    else if (elec <= limit2)
    {
        price = limit1 * price1 + (elec - limit1) * price2;
    }
    else
    {
        price = limit1 * price1 + (limit2 - limit1) * price2 + (elec - limit2) * price3;
    }

    printf("%.1f", price);

    return 0;
}