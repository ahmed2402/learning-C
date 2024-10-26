// Write a func to print n terms of the fibonacci sequence
// fib(n)=fib(n-1)+fib(n-2)
#include <stdio.h>
int fib(int n);

int main(){
printf("%d",fib(5));
    return 0;
}

int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int fibM1= fib(n-1); // fib till n-1
    int fibM2= fib(n-2);
    int fibN= fibM1+fibM2;
    printf("%d\n",fibN);
    return fibN;
}