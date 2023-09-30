#include <stdio.h>
#include <math.h>

double length(double x1, double y1, double x2, double y2);
double area(double len1, double len2, double len3);

int main(void)
{
    double x1, y1, x2, y2, x3, y3;
    scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3);
    double len1 = length(x1, y1, x2, y2);
    double len2 = length(x1, y1, x3, y3);
    double len3 = length(x2, y2, x3, y3);
    printf("%.2lf", area(len1, len2, len3));

    return 0;
}

double length(double x1, double y1, double x2, double y2)
{
    double length = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

    return length;
}

double area(double len1, double len2, double len3)
{
    double temp = (len1 + len2 + len3) / 2;
    double area = sqrt(temp * (temp - len1) * (temp - len2) * (temp - len3));

    return area;
}