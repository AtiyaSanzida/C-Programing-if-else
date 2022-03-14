#include <stdio.h>
#include <math.h>
int main()
{
    float radius,a;

    printf("Enter the raduis: \n");
    scanf("%f",&radius);
    printf("Enter the length: \n");
    scanf("%f",&a);

    if(2*radius==sqrt(2*a*a))
    {
        printf("The square can be placed inside the circle");
    }
    else
    {
        printf("The square can not be placed inside the circle");
    }
    return 0;
}
