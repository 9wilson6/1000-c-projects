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
    
   printf("%d %s ", x, (x%2)? " is odd number": "is even number");
    return (0);
}