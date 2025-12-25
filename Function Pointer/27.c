#include <stdio.h>

int sum(int a){
    int num = 0;
    while (a>0)
    {
        int b = a%10;
        num+=b;
        a/=10;
    }
    return num;
}

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    int (*fp)(int);
    fp = sum;
    int num = fp(a);
    printf("Sum = %d\n",num);
    return 0;
}