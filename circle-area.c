#include <stdio.h>
int main()
{
    int radius; //The distance from center to the outer wall of circle
    printf("Enter the radius: ");
    scanf("%i", &radius); //address-of operator

    double area = 3.14 * (radius * radius);
    printf("The area of the circle with %i radius is %f\n", area);

    return 0;
}
