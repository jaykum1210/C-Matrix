#include <stdio.h>

int fib(int a){
    if (a==0)
    {
        return 0;
    }
    else if (a==1)
    {
        return 1;
    }
    return fib(a-1) + fib(a-2);
}

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    int b = fib(a);
    printf("%dth number = %d\n",a,b);
    return 0;
}