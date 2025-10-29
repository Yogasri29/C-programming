/*writing a c program on increment and decrement operators*/
#include <stdio.h>

int main()
{
    int num = 3;

    // Using unary prefix increment operator
    printf("\nThe value of num = %d", num);
    printf("\nThe value of ++num = %d", ++num);
    printf("\nThe new value of num = %d", num);

    // Using unary prefix decrement operator
    printf("\n\nThe value of num = %d", num);
    printf("\nThe value of --num = %d", --num);
    printf("\nThe new value of num = %d", num);

    return 0;
}
