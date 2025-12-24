#include <stdio.h>

int message(int a, int b){
    return a+b;
}

int main(){
    int a,b;
    printf("Enter two numbers = ");
    scanf("%d%d",&a,&b);
    int (*fp)(int,int);
    fp = message;
    int num = fp(a,b);
    printf("Sum = %d\n",num);
    return 0;
}