#include <stdio.h>

float carea(int a){
    return 3.14*a*a;
}

int main(){
    int a;
    printf("Enter radius = ");
    scanf("%d",&a);
    float b = carea(a);
    printf("Arear of circle = %0.2f\n",b);
    return 0;
}