// Factorial of n
#include <stdio.h>
int fact(int n);

int main(){
    printf("factorial is : %d", fact(5));

    return 0;
}

int fact(int n){
    if(n==1){
         return 1;
    }
    int factM1= fact(n-1); // fact till n-1
    int factN= factM1*n;
    return factN;
}