#include <stdio.h>

int sum(int a){
    int num = 0;
    for (int i = 0; i <=a; i+=2)
    {
        num+=i;
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