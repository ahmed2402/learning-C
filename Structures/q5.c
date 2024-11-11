// Make a struct to store bank account info of a customer of ABC Bank . Also, make an alias for it.

#include <stdio.h>
#include <string.h>
typedef struct bankAcc
{
    char name[100];
    int accNo;
} ba ;


int main(){
    ba acc1;
    acc1.accNo=111;
    strcpy(acc1.name, "AHMED");
printf("acc no is : %d\n", acc1.accNo);
printf("name is : %s", acc1.name);

    return 0;
}