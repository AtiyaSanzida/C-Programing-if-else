#include<stdio.h>

int main()
{
    float salary,tax;
    printf("Enter the amount of salary: ");
    scanf("%f",&salary);

    if(salary>=0.00 && salary<=14999.99)
    {
        tax=(15.0/100)*salary;
        printf("tax = %f\n",tax);
    }
    else if (salary>=15000 && salary<=29999.99)
    {
        tax=2250.00+(18.0/100)*(salary-15000.00);
        printf("tax = %f\n",tax);
    }
    else if (salary>= 30000.00 && salary<= 49999.99)
    {
        tax=5400.00+(22.0/100)*(salary-30000.00);
        printf("tax = %f\n",tax);
    }
    else if (salary>=50000.00 && salary<=79999.99)
    {
        tax= 11000.00+( 27.0/100)*(salary-50000.00);
        printf("tax = %f\n",tax);
    }
    else if (salary>=80000.00 && salary<=150000.00)
    {
        tax= 21600.00+(33.0/100)*(salary-80000.00);
        printf("tax = %f\n",tax);
    }
    else
    {
        printf("This is out of rage");
    }
    return 0;


}
