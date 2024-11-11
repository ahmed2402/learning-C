// write a program to store data of 3 students.

#include <stdio.h>
#include <string.h>

struct student
{
    char name[100];
    int rollno;
    float cgpa;
};

int main(){
    struct student s1;
    strcpy(s1.name, "AHMED");
    s1.rollno = 171;
    s1.cgpa= 4.0;

printf("Student Name = %s\n", s1.name);
printf("Student Roll No. = %d\n", s1.rollno);
printf("Student CGPA = %.2f\n", s1.cgpa);

return 0;
}