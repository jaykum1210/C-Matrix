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
    return fib(a-1)+fib(a-2);
}

int main(){
    int a;
    printf("Enter value = ");
    scanf("%d",&a);
    int (*fp)(int);
    fp = fib;
    printf("Fibonacci series = ");
    for (int i = 0; i < a; i++)
    {
        printf("%d ",fp(i));
    }
    return 0;
}