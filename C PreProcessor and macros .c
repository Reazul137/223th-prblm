#include<stdio.h>
#define PI  3.1416
#define area(r) (3.1416 *(r) * (r))
int main()
{
    int radius;
    float area;

    printf("Enter the radius : ");
    scanf("%d",&radius);

    area = area (radius);

    printf("Area = %.2f",area);

    return 0;
}
