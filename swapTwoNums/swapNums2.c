#include <stdio.h>

/**
 * C programm to swap two numbers without using a temp value
*/

//swap function  that takes in memory address of two numbers

void swap(int *num1, int *num2){
*num1 = *num1 + *num2;

*num2 = *num1 -*num2;
*num1 = *num1 - *num2;

}

int main()
{
    int num1, num2;

    printf("Enter num1: ");
    scanf("%d", &num1);

    printf("Enter num2: ");
    scanf("%d", &num2);

    printf("Before swap: num1: %d num2: %d", num1, num2);

    //invoke swap fun
    swap(&num1, &num2);
    printf("\nAfter swap: num1: %d num2: %d", num1, num2);

    return (0);
}