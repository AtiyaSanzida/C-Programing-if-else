#include<stdio.h>

int main()

{
    int sem_no;
    printf("Enter the number of semester: ");
    scanf("%d",&sem_no);

    if(sem_no==0)
    {
        printf("Invalid Semester");
    }
    else if(sem_no>=1 && sem_no<=3)
    {
        printf("Freshman");
    }
    else if(sem_no>=4 && sem_no<=6 )
    {
        printf("Sophomore");
    }
    else if(sem_no>=7 && sem_no<=9 )
    {
        printf("Junior");
    }
   else if(sem_no>=10 && sem_no<=12 )
    {
        printf("Senior");
    }
   else if(sem_no>12)
    {
        printf(" You must graduate soon");
    }
    else
    {
        printf("This number is invalid");
    }
    return 0;
}
