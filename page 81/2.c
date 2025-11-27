#include <stdio.h>

int main(){
    int a,b;
    printf("Enter two numbers = ");
    scanf("%d%d",&a,&b);
    int max = a;
    int min = b;
    if (b>a)
    {
        max = b;
        min = a;
    }
    int num = 1;
    for (int i = min; i>=2; i--)
    {
        if (min%i==0 && max%i==0)
        {
            num = i;
            break;
        }
    }
    printf("GCD of %d and %d = %d\n",a,b,num);
    return 0;
}