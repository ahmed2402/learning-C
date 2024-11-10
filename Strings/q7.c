// 7. Write a func to count the occurrence of vowels in a string

#include <stdio.h>

void countVowel(char str[]);

int main(){
    char str[]= "HelloWorld";
    countVowel(str);
    return 0;
}

void countVowel(char str[]){
    int count =0 ;
for (int i = 0; str[i] != '\0'; i++)
{
    if(str[i]=='a' || str[i]=='e' ||str[i]=='i' || str[i]=='o' || str[i]=='u'){
        count++;
    }
}
printf("%d", count);
}