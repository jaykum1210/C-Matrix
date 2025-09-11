#include <stdio.h>

int main(){
    int a,num = 0,b,rev=0;
    printf("Enter number = ");
    scanf("%d",&a);
    while (a>0)
    {
        b = a%2;
        num = num*10 + b;
        a = a/2;
    }
    while (num>0)
    {
        int c = num%10;
        rev = rev*10 + c;
        num = num/10;
    }
    
    printf("Binary = %d\n",rev);

    return 0;
}