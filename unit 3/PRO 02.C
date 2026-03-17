#include<stdio.h>

void area(float *r)
{
    float a;
    a = 3.14 * (*r) * (*r);
    printf("Area of circle = %f",a);
}

int main()
{
    float radius;

    printf("Enter radius: ");
    scanf("%f",&radius);

    area(&radius);

    return 0;
}
