# Function to add two integer numbers
* Write a function named **sum** which can add two integer numbers
* The function must return 
  * sum of two integers if values are within integer range
  * Overflow and Underflow errors if value is above or below Integer range
  * The function must not use any printf and scanf functions
  * Supporting functions can be used to read and print data to and from console.
##Solution for Activity_1

#include<stdio.h>  
  
int add(int, int); // function prototype  
  
int main()  
{  
    int a, b;  
  
    printf("Enter 2 integer numbers\n");  
    scanf("%d%d", &a, &b);  
  
    //function call add(a, b);  
    printf("%d + %d = %d\n", a, b, add(a, b));  
  
    return 0;  
}  
  
//function definition  
int add(int x, int y)  
{  
    return(x+y);  
}  

##Output 1
Enter 2 integer numbers
25
25
25 + 25 = 50


