#include "stdio.h"

int main()
{
    int A = 0, B = 0;

    printf("Enter two number to be added\n");
    scanf("%d %d", &A, &B);

    int Sum = A + B;
    
    printf("Sum = %d", Sum);
    
    return 0;
}