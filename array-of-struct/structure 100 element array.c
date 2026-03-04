#include <stdio.h>

struct Student{

    int id;
    char name[50];
    float cgpa;

}student_array[100] ;


int num = 0;

int main () {

int i;

printf ("Enter number of students (less than 100): ");
scanf ("%d" , &num);

for (i=0 ; i<num ; i++) {

    printf("\nNAME OF STUDENT %d :\n" , i+1);
    scanf(" %[^\n]" , student_array[i].name);

    printf("\nID OF STUDENT %d :\n" , i+1);
    scanf ("%d" , &student_array[i].id);

    printf("\nCGPA OF STUDENT %d :\n" , i+1);
    scanf ("%f" , &student_array[i].cgpa);
}

for (i=0 ; i<num ; i++) {

    printf("\nNAME OF STUDENT %d : %s \n" , (i+1), student_array[i].name);


    printf("ID OF STUDENT %d : %d \n" , (i+1), student_array[i].id);


    printf("CGPA OF STUDENT %d : %.2f\n" , (i+1), student_array[i].cgpa);

}

return 0;
}
