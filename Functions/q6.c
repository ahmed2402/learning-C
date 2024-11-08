// Q. Sum of first n natural numbers
//sum(n-1)+n
#include <stdio.h>
int sum(int n);

int main(){
    printf("sum is : %d", sum(5));

    return 0;
}

int sum(int n){
    if(n==1){
         return 1;
    }
    int sumM1= sum(n-1); // sum till n-1
    int sumN= sumM1+n;
    return sumN;
}
