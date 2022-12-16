#include <stdio.h>

/**
 * C program that takes the 3 numbers and finds
 *  the largest number Aamong three numbers.
*/

int main()
{
    int num1, num2, num3;

    printf("enter first number:\n ");
    scanf("%d", &num1);

     printf("enter second number:\n ");
    scanf("%d", &num2);

     printf("enter third number:\n ");
    scanf("%d", &num3);

    if(num1 > num2 && num1 > num3){

        printf("max is %d ", num1);
    }

    if(num2 > num1 && num2 > num3){

        printf("max is %d ", num2);
    }

    if(num3 > num1 && num3> num2){

        printf("max is %d ", num3);
    }
    return (0);
}