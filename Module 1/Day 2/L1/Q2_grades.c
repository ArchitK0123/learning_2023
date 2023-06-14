#include <stdio.h>

int main(){
	
int marks;

printf("Enter your marks ");
scanf("%d",&marks);

printf(" Your marks are %d,", marks); 

	if(marks >= 90){
	printf(" and you got Grade A.");
		}
	else if (marks >=75){ 
		printf("Grade B");
		}
	else if (marks >=60){
		printf("Grade C");
		}
	else if (marks <= 50){
		printf("Grade D");
		}
	else if (marks < 0){
		printf("Grade F");
		}
		
return 0;
}