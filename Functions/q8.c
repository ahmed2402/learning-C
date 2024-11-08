// Write func to convert celsius to farenheit
#include <stdio.h>
float cel(float c);
int main(){
    float c=55;
printf("%.2f Celsius is %.2f Farenheit",c,cel(55));
    return 0;
}
float cel(float c){
    float f;
    f=(c * 9/5) + 32 ;
    return f;
}
