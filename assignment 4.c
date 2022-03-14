#include <stdio.h>

int main()


{
    float x;
    printf("Enter the value of x: ");
    scanf("%f",&x);

    if(x==(int)x)
    {
        printf("The value is an integer");
    }
    else
    {
        printf("The value is not an integer");
    }
    return 0;
}
