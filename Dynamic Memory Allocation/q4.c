// 4. Allocate memory for 5 numbers. Then dynamically increase it to 9 numbers.


#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr;
    ptr=(int*) malloc(5*sizeof(int));
    ptr[0] = 10;
    ptr[1] = 20;
    ptr[2] = 30;
    ptr[3] = 40;
    ptr[4] = 50;

ptr=realloc(ptr,8);
ptr[5] = 60;
ptr[6] = 70;
ptr[7] = 80;

for (int i = 0; i < 9; i++)
{
    printf("%d \n", ptr[i]);
}
    return 0;
}