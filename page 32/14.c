#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c,d,r1,r2;
    printf("Enter Three Numbers = ");
    scanf("%f%f%f",&a,&b,&c);
    d = b*b - 4*a*c;
    if (d<0)
    {
        printf("Imaginary Number");
    }
    else{
        r1 = (-b + sqrt(d))/(2*a);
        r2 = (-b - sqrt(d))/(2*a);
    }
    printf("Roots of %0.2f, %.2f and %0.2f = %0.2f and %0.2f\n",a,b,c,r1,r2);
    return 0;
}