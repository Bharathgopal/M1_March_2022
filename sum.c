// ##Solution for Activity

#include<stdio.h>  

int add(int, int);

int main()  
{  
    int a, b;  

    printf("Enter two integer numbers\n");  
    scanf("%d%d", &a, &b);  
    printf("%d + %d = %d\n", a, b, add(a, b));  

    return 0;  
}  
 
int add(int x, int y)  
{  
    return(x+y);  
}  

// ************OUTPUT***************

// Enter 2 integer numbers
// 12
// 18
// 12 + 18 = 03