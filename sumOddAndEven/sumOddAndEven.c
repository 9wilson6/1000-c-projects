#include <stdio.h>

/**
 * 1. Take the number N upto which we have to find the sum as input.
 * 2. Using for loop take the elements one by one from 1 to N.
 * 3. Using if,else statements separate the element as even or odd.
 * 4. Add the even and odd numbers separately and store it in different variables.
 * 5. Print the sum separately and exit.
*/

int main()
{
    int n, sumOdd , sumEven, count;

    sumEven = 0;
    sumOdd = 0;

    printf("Enter a number to calculate the sum: ");
    scanf("%d", &n);

    while (n > 0)
    {
    if((n%2) == 0){
        sumEven +=n;
       
    }else
    {
        sumOdd +=n;
        
    }
    n--;
    }
    printf("Sum of even numbers between 1 and %d is %d \n", n, sumEven);
    printf("Sum of odd numbers between 1 and %d is %d \n", n, sumOdd);
}