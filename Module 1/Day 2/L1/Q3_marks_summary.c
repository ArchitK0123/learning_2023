#include <stdio.h>

typedef struct {
    int rollNo;
    char name[20];
    char surname[20];
    float phy;
    float math;
    float chem;
} Student;

int main() {
	
    Student student;

    printf("Enter Roll No: ");
    scanf("%d", &student.rollNo);

    printf("Enter Name: ");
    scanf(" %[^\n]s", student.name);
    
    printf("Enter Surname: ");
    scanf(" %[^\n]s", student.surname);
    
    printf("Enter Marks of Physics: ");
    scanf("%f", &student.phy);

    printf("Enter Marks of Math: ");
    scanf("%f", &student.math);

    printf("Enter Marks of Chemistry: ");
    scanf("%f", &student.chem);

    float total= student.phy + student.math + student.chem;
    float percentage= (total / 300) * 100;

    printf("\nRoll No: %d \n", student.rollNo);
    printf("Name: %s %s \n", student.name, student.surname);
    printf("Physics Marks: %.2f \n", student.phy);
    printf("Math Marks: %.2f \n", student.math);
    printf("Chemistry Marks: %.2f \n", student.chem);
    printf("Total Marks: %.2f \n", total);
    printf("Percentage: %.2f% \n", percentage);
    
    return 0;
}
