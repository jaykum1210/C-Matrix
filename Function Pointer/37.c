#include <stdio.h>

int count(int a){
    int num = 0;
    while (a>0)
    {
        num++;
        a/=10;
    }
    return num;
}

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    int (*fp)(int);
    fp = count;
    int num = fp(a);
    printf("Number of digits = %d\n",num);
    return 0;
}