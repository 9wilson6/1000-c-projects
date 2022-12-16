#include <stdio.h>

/**
 * use bitwise operator to check odd or even
*/

int main()
{
    int x;

    printf("Enter integer to check: \n");

    scanf("%d" , &x);

    
        printf("%d is %s", x , (x & 1 )? "odd": "even");
    
}