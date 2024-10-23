//  Function to calculate square of a number
#include <stdio.h>

int sqnum(int num);

int main(){
int num;
printf("enter num\n");
scanf("%d",&num);
printf("square is : %d",sqnum(num));

return 0;
}

int sqnum(int num) {
    return num*num;
} 

//  Function to calculate square of a number
//with math.h libray
#include <stdio.h>
#include <math.h>

int main(){
int num;
printf("enter num\n");
scanf("%d",&num);
printf("square is : %f",pow(num,2));

return 0;
}