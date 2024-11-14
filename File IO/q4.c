// 4. 2 numbers - a & b, are written in a file. Write a program to replace them with their sum.

#include <stdio.h>  

int main(){

    FILE *fptr;
    fptr=fopen("Sum.txt","r");

    int a, b;

    fscanf(fptr,"%d", &a);
    fscanf(fptr,"%d", &b);
    printf("a = %d, b = %d", a,b);

    fclose(fptr);

    fptr=fopen("Sum.txt","w");
    fprintf(fptr,"Sum = %d", a+b);

    fclose(fptr);

  return 0;  
}