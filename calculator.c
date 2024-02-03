#include <stdio.h>
#include <math.h>
int main()
{
    int num1, num2, num3, dividend, divisor, quotient, remainder, choise;
    char decision;

do
{
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. exit\n");

    printf("press any key to choose: \n");
    scanf("%d", &choise);

    switch(choise)
    {
        case 1:
        printf("Enter any two numbers: \n");
        scanf("%d %d", &num1, &num2);
        num3=num1+num2;
        printf("sum: %d\n", num3);
        break;

        case 2:
        printf("Enter any two numbers: \n");
        scanf("%d %d", &num1, &num2);
        num3=num1-num2;
        printf("subtraction: %d\n", num3);
        break;

        case 3:
        printf("Enter any two numbers: \n");
        scanf("%d %d", &num1,&num2);
        num3=num1*num2;
        printf("multiplication: %d\n", num3);
        break;

        case 4:
        printf("Enter dividend and divisor: \n");
        scanf("%d %d", &dividend,&divisor);

        if(divisor==0)
        {
            printf("error: enter the valid digits\n");
        }
        else
        {         
            quotient=dividend/divisor;
            remainder=dividend % divisor;
            printf("Quotient: %d\nRemainder: %d\n",quotient, remainder);
        }
        break;

        case 5: 
        exit(0);
        break;

        default :
        printf("Press the valid keys only\n");
    }
    printf("\nDo you want to continue?\nPress 'Y' for yes and 'N' for no: ");
    scanf(" %c", &decision);
}while(decision=='Y' || decision=='y');
return 0;
}