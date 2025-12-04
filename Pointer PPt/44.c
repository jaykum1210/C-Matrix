#include <stdio.h>

int sum(int a,int b){
    return a+b;
}

int main(){
    int a,b;
    printf("Enter two numbers = ");
    scanf("%d%d",&a,&b);
    int (*fn)(int,int);
    fn = sum;
    int result = fn(a,b);
    printf("Sum = %d\n",result);
    return 0;
}