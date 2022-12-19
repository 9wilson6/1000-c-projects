#include <stdio.h>

/**
 * check for numbers divisible by 5 within a range also sum the numbers.
*/

int main()
{
    int start, end, total, count;

    total, count = 0;
    printf("Enter range of numbers: ");

    scanf("%d %d", &start, &end);
    int i; 


    for ( i = start; i <= end; i++)
    {
       if (i % 5 == 0)
       {
         printf("%d, ", i);
         total += i;
         count++;
       }
       
    }
    printf("\nNumber of intergers divisible by 5 between %d and %d is %d \n", start,end,count);
    printf("\n%d is the sum", total);
    return(0);
}