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

    if (num1 > num2 )
    {
       if (num1 > num3)
       {
        printf("greatest is %d \n", num1);
       }else{
        printf("greatest is %d \n", num3);
       }
       
    }else if(num2 > num3){
        printf("greatest is %d \n", num2);
    }else{

        printf("greatest is %d \n", num3);
    }
    
    return (0);
}