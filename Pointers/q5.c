// 5. Write a func to calc the sum,product & avg of 2 numbers. Print that avg in main func

#include <stdio.h>

int calc(int a, int b, int *sum, int *product,int *avg);


int main(){
    int sum,product,avg;
int x=4,y=8;
calc(x,y, &sum, &product, &avg);
printf("sum = %d \n product = %d \n avg = %d", sum , product, avg);
    return 0;
}

int calc(int a, int b, int *sum, int *product,int *avg){
    *sum=a+b;
    *product=a*b;
    *avg=*sum/2;
    
}
