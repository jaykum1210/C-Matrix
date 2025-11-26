#include <stdio.h>

int gcd(int a, int b){
    if (a==0)
    {
        return b;
    }
    return gcd(b,a%b);
}

int main(){
    int a,b;
    printf("Enter two numbers = ");
    scanf("%d%d",&a,&b);
    int num = gcd(a,b);
    printf("GCD of %d and %d = %d\n",a,b,num);
    return 0;
}