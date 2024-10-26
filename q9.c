// Write a func to calculate percentage of a student from marks in science, math & english.
#include <stdio.h>
int calcperc(int math,int sci,int eng);

int main(){
   int math,sci,eng; 
    printf("Enter marks in Science: ");
    scanf("%d", &sci);
    
    printf("Enter marks in Math: ");
    scanf("%d", &math);
    
    printf("Enter marks in eng: ");
    scanf("%d", &eng);
printf("perctange is : %d",calcperc(math,eng,sci));    
return 0;
}
int calcperc(int math,int sci,int eng){
int perc;
perc=((math+sci+eng)*100)/300;
return perc;
}