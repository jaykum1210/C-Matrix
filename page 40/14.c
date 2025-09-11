#include <stdio.h>

int main(){
    int a,fac=1;
    printf("Enter number = ");
    scanf("%d",&a);
    for (int i = 1; i <=a; i++)
    {
        fac = fac*i;
    }
    printf("Factorial = %d\n",fac);
    return 0;   
}