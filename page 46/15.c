#include <stdio.h>

int main(){
    int a,b;
    printf("Enter first number = ");
    scanf("%d",&a);
    printf("Enter second number = ");
    scanf("%d",&b);
    int lcm,hcf,min=a;
    if (min>b)
    {
        min = b;
    }
    for (int i = min; i > 1; i--)
    {
        if (a%i==0 && b%i==0)
        {
            hcf = i;
            printf("HCF of %d and %d = %d\n",a,b,i);
            break;
        }
    }
    lcm = (a*b)/hcf;
    printf("LCM of %d and %d = %d\n",a,b,lcm);
    return 0;
}