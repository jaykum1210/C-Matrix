#include <stdio.h>
#include <math.h>

int main(){
    int a,rev = 0,b,oct = 0,i=0;
    printf("Enter number = ");
    scanf("%d",&a);
    while (a>0)
    {
        b = a%10;
        rev = rev*10 +b;
        a=a/10;
    }
    int c = rev;
    while (c>0)
    {
        b = c%8;
        oct = oct + b*pow(10,i);
        c = c/8;
        i++;
    }
    printf("Reverse number = %d\n",rev);
    printf("Octal number = %d\n",oct);
    return 0;
}