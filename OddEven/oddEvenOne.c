#include <stdio.h>

/**
 * check if provided number is odd or even 
 * this method uses if else and mod operator
*/

int main()
{
    int x;

    printf("Enter an integer:\n"); //pass a message to user
    scanf("%d" , &x); //get message from user and store it in x's mem location
    
    if (x % 2 == 0)
    {
        printf("%d is even \n", x);
    }else
    {
        printf("%d is odd \n", x);
    }
    
    return (0);
}