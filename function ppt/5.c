#include <stdio.h>

float area(int a){
    float temp = 3.14*a*a;
    return temp;
}

int main(){
    int r;
    printf("Enter radius = ");
    scanf("%d",&r);
    float a = area(r);
    printf("Area of circle = %0.2f\n",a);
    return 0;
}