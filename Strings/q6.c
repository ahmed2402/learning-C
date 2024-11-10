// 6. Write  a func named slice, which takes a string and returns a sliced string from index n to m

#include <stdio.h>
#include <string.h>

void slice(char str[], int m ,int n);
int main(){
    char str[] = "HelloWorld";
    slice(str,2,6);

return 0;
}
void slice(char str[], int m ,int n){
    char newstr[100];
    int j=0;
    for (int i = n ; i <=m; i++,j++)
    {
        newstr[j]=str[i];
    }
    newstr[j];
    puts(newstr);
}