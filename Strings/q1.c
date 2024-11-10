// 1. Create a string firstname and lastname to storedetails of user and print alll the characters using a loop
#include <stdio.h>
int main(){
    char firstname[] = "Ahmed";
    char lastname[] = "Raza";
   for (int i = 0; firstname[i] != '\0'; i++)
   {
    printf("%c",firstname[i]);
   }
   printf("\n");
   for (int i = 0; lastname[i] != '\0'; i++)
   {
    printf("%c",lastname[i]);
   }
    return 0;
}