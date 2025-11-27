#include <stdio.h>

int fib(int a){
    if (a==0)
    {
        return 1;
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
    int num = fib(a);
    printf("%dth term = %d\n",a,num);
    return 0;
}