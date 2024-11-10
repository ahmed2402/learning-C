// 3. Make a program that input user's name and print its length.
#include <stdio.h>
int countlength(char arr[]);
int main (){
    char username[100];
    fgets(username,100,stdin);
    puts(username);
    printf("length is : %d",countlength(username));

    return 0;
}
int countlength(char arr[]){
    int count=0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
}
return count-1;
}