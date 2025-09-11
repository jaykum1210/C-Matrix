#include <stdio.h>

int main(){
    int a,b,mul = 1;
    printf("Enter number = ");
    scanf("%d",&a);
    printf("Enter power = ");
    scanf("%d",&b);
    for (int i = 1; i <=b; i++)
    {
        mul = mul * a;
    }
    printf("Number = %d\n",mul);
    return 0;
}