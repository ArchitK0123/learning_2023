#include <stdio.h>  
  
int main()  
{  
    int num1, num2, biggest;  
  
    printf("Enter 2 numbers\n");  
    scanf("%d%d", &num1, &num2);  
  
    (num1 > num2) ? (biggest = num1) : (biggest = num2);  
  
    printf("Biggest of %d and %d is %d\n", num1, num2, biggest);  
  
    return 0;  
} 