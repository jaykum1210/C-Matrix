#include <stdio.h>
#include <math.h>

int rev(int a){
    int i = 0;
    int mul = 0;
    int p = 1;
    while (a!=0)
    {
        int b = a%2;
        mul+= b*p;
        p *=10;
        a/=2;
    } 
    return mul;
}

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    int b = rev(a);
    printf("Binary of %d = %d\n",a,b);
    return 0;
}