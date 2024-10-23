//Q2 Write a func that prints salam if user is pakistani & bonjour if french
#include<stdio.h>
//function declaration/prototype
void salam();
void bonjour();
int main() {
char nationality;
printf("Enter your nationality\n");
scanf("%c",&nationality);
if(nationality=='p'){
    salam();
} else {
    bonjour();
}
return 0;
}
//function definition
void salam() {
    printf("salam bhai");
}
void bonjour() {
    printf("bonjour nigga");
}

