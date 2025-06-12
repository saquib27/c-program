#include <stdio.h>
void main()
{
    float diameter_of_circle;
    printf("Enter Diameter of circle\n");
    scanf("%f", &diameter_of_circle);
    float circumference = (3.14 * diameter_of_circle);
    float area = (3.14 * (diameter_of_circle * diameter_of_circle) / 4);
    printf("circumference of circle %.2f\n", circumference);
    printf("area of circle %.2f\n", area);
}