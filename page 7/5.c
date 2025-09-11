#include <stdio.h>

int main(){
    int f;
    printf("Enter temperature in Fahrenheit = ");
    scanf("%d",&f);
    float c = ((float)f - 32)*5.0/9.0;
    printf("Temperature in Centigrade = %0.2f\n",c);
    return 0;
}