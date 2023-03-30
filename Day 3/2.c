#include<stdio.h>
#define PI 3.14159265359
int main() 
{
    float radius, diameter, circumference, area;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    diameter = 2 * radius;
    circumference = 2 * PI * radius;
    area = PI * radius * radius;
    printf("Diameter of the circle = %f units\n", diameter);
    printf("Circumference of the circle = %f units\n", circumference);
    printf("Area of the circle = %f square units\n", area);
    return 0;
}
