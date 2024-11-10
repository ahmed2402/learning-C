// 8. Check if a given character is present in a string or not.

#include <stdio.h>

void checkChar(char str[]);

int main (){
    char str[100];
    scanf("%s",str);
    checkChar(str);
      return 0;
}

void checkChar(char str[]){
    for (int i = 0; str[i] != '\0'; i++)
    {
        if(str[i]=='a'){
            printf("yes");
        }
    }
    
}