#include <stdio.h>

int gcd(int a, int b){
    if (b==0)
    {
        return a;
    }
    return gcd(b,a%b);
}

int main(){
    int a,b;
    printf("Enter two numbers = ");
    scanf("%d%d",&a,&b);
    int (*fp)(int, int);
    fp = gcd;
    int num = fp(a,b);
    printf("GCD of %d and %d = %d\n",a,b,num);
    return 0;
}