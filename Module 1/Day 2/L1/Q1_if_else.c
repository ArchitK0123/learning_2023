#include <stdio.h>
int main()
{

int num1, num2;
int biggest;

printf("Enter 2 numbers\n");  
scanf("%d%d", &num1, &num2);

    if (num1 > num2) {
        biggest = num1;
    }
	else {
        biggest = num2;
    }
    
printf("Biggest of %d and %d is %d\n", num1, num2, biggest);  
  
    return biggest;
}
