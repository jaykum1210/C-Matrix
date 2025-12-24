#include <stdio.h>

int sum(int a,int b){
    return a+b;
}

int sub(int a, int b){
    return a-b;
}

int main(){
    int a,b;
    printf("Enter two numbers = ");
    scanf("%d%d",&a,&b);
    int (*fb)(int,int);
    fb = sum;
    int num1 = fb(a,b);
    printf("Sum = %d\n",num1);
    fb = sub;
    int num2 = fb(a,b);
    printf("Sub = %d\n",num2);
    return 0;
}