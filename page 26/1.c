#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c,r1,r2;
    printf("Enter three numbers = ");
    scanf("%d%d%d",&a,&b,&c);
    float d = b*b - 4*a*c;
    if (d<0)
    {
        printf("Imaginary Solutions");
    }
    else{
        r1 = (-b + sqrt(d))/(2*a);
        r2 = (-b - sqrt(d))/(2*a);
    }
    
    printf("Solutions = %.2f %.2f",r1,r2);
    return 0;
}