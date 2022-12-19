#include <stdio.h>

/**
 * swap two numbers using bitwise operator XOR (^)
 * 
*/

void swap( int *num1, int *num2)
{
    //take num1 = 12 (1100) and num2 = 15 (1111)
    *num1 = *num1 ^ *num2; // gives 0011
    /**
     *   1100
     * ^ 1111
     *  ------
     *   0011 ->3
    */
    *num2 = *num1 ^ *num2;//gives 1100
    /**
     *   0011
     * ^ 1111
     *  ------
     *   1100 -> 12
    */

    *num1 = *num1 ^ *num2;// gives 1111
    /**
     *   1100
     * ^ 0011
     *  ------
     *   1111 -> 15
    */

    
}

int main()
{
    int num1, num2;

    printf("Enter num1: ");
    scanf("%d", &num1);

    printf("Enter num2: ");
    scanf("%d", &num2);

    printf("Before swap num1: %d  num2: %d ", num1, num2);

    swap(&num1, &num2);

    printf("After swap num1: %d  num2: %d ", num1, num2);
    return (0);
}