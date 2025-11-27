#include <stdio.h>

float vol(float r){
    return (4.0/3.0)*3.14*r*r*r; 
}

float area(float r){
    return 4*3.14*r*r;
}

int main(){
    float a;
    printf("Enter Diameter = ");
    scanf("%f",&a);
    float r = a/2;
    float num1 = vol(r);
    float num2 = area(r);
    printf("Volume = %0.2f\n",num1);
    printf("Area = %0.2f\n",num2);
    return 0;
}