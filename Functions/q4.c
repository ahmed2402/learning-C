// write func to calc area of sq,circle and rectangle
#include <stdio.h>

float sq(float length);
float cr(float radius);
float rec(float len, float width);

int main(){
    float length, radius, len, width;
    
    // Calculate area of square
    printf("Enter length of square: ");
    scanf("%f", &length);
    printf("Area of square: %.2f\n", sq(length));
    
    // Calculate area of circle
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    printf("Area of circle: %.2f\n", cr(radius));
    
    // Calculate area of rectangle
    printf("Enter length and width of rectangle: ");
    scanf("%f %f", &len, &width);
    printf("Area of rectangle: %.2f\n", rec(len, width));

    return 0;
}

float sq(float length) {
    return length * length;
}

float cr(float radius) {
    return 3.142 * (radius * radius);
}

float rec(float len, float width) {
    return len * width;
}
