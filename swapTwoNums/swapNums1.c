#include <stdio.h>

/**
 * C programm to accept two ints
 * num1 and num2 and swap their values
 * Use a user-defined function for swapping by 
 * accepting the addresses of the two variables.
 * output values of num1 and num2 before and after swapping
*/
//function to swap values
void swap( int   *num1, int *num2)
{
   int  temp = *num1;

   *num1 = *num2;

    *num2 = temp;
   

}
//main function
int main()
{
    int x, y;
    printf("Enter first num: ");
    scanf("%d", &x);

    printf("Enter second num: ");
    scanf("%d", &y);
    printf("Before swap num1: %d num2: %d\n", x, y);
    //call to swap function
    swap(&x, &y);
    printf("After swap num1: %d num2: %d \n", x, y);
    
}