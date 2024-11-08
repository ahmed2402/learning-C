//WRITE A PROGRAM TO ENTER PRICE OF 3 ITEMS AND PRINT THEIR FINAL COST WITH GST
#include <stdio.h>
int main (){
    float price[3];
    printf("Enter price of 1st item : \n");
    scanf("%f", &price[0]);
    printf("Enter price of 2nd item : \n");
    scanf("%f", &price[1]);
    printf("Enter price of 3rd item : \n");
    scanf("%f", &price[2]);

    printf("total cost of 1st item : %.2f \n", price[0]+(price[0]*0.18));
    printf("total cost of 2nd item : %.2f \n", price[1]+(price[1]*0.18));
    printf("total cost of 3rd item : %.2f \n", price[2]+(price[2]*0.18));
return 0;    
}