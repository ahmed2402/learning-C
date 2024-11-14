// 3. In Q2, free the memory allocated with calloc.
// 1. Write a program to allocate of size n, where n is entered by the user.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr;
    int n;
    printf("enter size : ");
    scanf("%d", &n);
    ptr=(int*) calloc(n, sizeof(int));

for (int i = 0; i < n; i++)
{
    printf("%d \n", ptr[i]);
}

free(ptr);
ptr=(int*) calloc(2, sizeof(int));

for (int i = 0; i < 2; i++)
{
    printf("%d \n", ptr[i]);
}
    return 0;
}   