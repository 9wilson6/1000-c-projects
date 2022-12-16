#include <stdio.h>

/**
 * get largest of three numbers using if else statement.
 * 
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

   num1 > num2? (num1 > num3 ? printf("%d is the largest \n", num1): printf("%d is the largest \n", num3)) : num2 > num3? printf("%d is the largest \n", num2) : printf("num 3");
    return (0);
}