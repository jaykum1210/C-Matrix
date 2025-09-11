#include <stdio.h>

int main(){
    int a,rev = 0,b;
    printf("Enter number = ");
    scanf("%d",&a);
    while (a>0)
    {
        b = a%10;
        rev = rev*10 + b;
        a = a/10;
    }
    printf("Reverse number = %d\n",rev);
    return 0;
}