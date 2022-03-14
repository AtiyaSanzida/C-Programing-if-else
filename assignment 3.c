#include <stdio.h>

int main()
{
    char b;
    printf("Enter a character : ");
    scanf("%c",&b);
    if( (b>=0 && b<=9) || (b>='a' && b<='f') || (b>='A' && b<='F'))

    {
        printf("It is a hexadecimal digit");
    }
    else
    {
        printf("It is not a hexadecimal digit");
    }
    return 0;
}
