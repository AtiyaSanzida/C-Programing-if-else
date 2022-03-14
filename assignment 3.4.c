#include<stdio.h>

int main()

{
    int x,y,s,c,a;

    char ch;
    printf("Enter the direction: ");
    scanf("%c",&ch);

    printf("Enter current coordinate(x and y positions): ");
    scanf("%d %d",&x,&y);

    printf("Enter no.units towards direction: ");
    scanf("%d",&s);

    if(ch=='n'||ch=='N')
    {
        a=y+s;
        printf("New coordinate(x,y):%d,%d\n",x,a);
    }
    else if(ch=='s'||ch=='S')
    {
        a=y-s;
        printf("New coordinate(x,y):%d,%d\n",x,a);
    }
    else if(ch=='w'||ch=='W')
    {
        a=x+s;
        printf("New cordinate(x,y):%d,%d\n",y,a);
    }
    else if(ch=='e'||ch=='E')
    {
        a=x-s;
        printf("New cordinate(x,y):%d,%d\n",y,a);
    }
    else
    {
        printf("Error!!This is not a correct sign");
    }
    return 0;
}
