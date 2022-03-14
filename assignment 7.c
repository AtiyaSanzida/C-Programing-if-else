#include<stdio.h>


int main()

{
    int a;
    printf("Enter integer : ");
    scanf("%d",&a);

    if(a%5 == 0)
    {
        printf("It is multiple of 5");
    }
    else if(a%11 == 0)
    {
        printf("It is multiple of 11");
    }
    else if(a%5 == 0 && a%11 == 0)
    {
        printf("It is multiple of both 5 and 11");
    }
    else
    {
        printf("This is not a multiple number of them");
    }

    return 0;

}
