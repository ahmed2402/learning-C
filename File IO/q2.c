// 2. Make a program to input student information from a user & enter it to a file.

#include <stdio.h>  

int main(){

    FILE *fptr;
    fptr=fopen("student.txt","w");
    char name[100];
    int age;
    float cgpa;
    printf("Enter name : \n");
    scanf("%s", name);
    printf("Enter age : \n");
    scanf("%d", &age);
    printf("Enter name : \n");
    scanf("%f", &cgpa);

    fprintf(fptr,"%s\t", name);
    fprintf(fptr,"%d\t", age);
    fprintf(fptr,"%f\t", cgpa);

    fclose(fptr);

  return 0;  
}