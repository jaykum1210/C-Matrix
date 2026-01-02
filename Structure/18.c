#include <stdio.h>

struct number{
    int num;
};

struct number fun(){
    struct number n;
    printf("Enter number = ");
    scanf("%d",&n.num);
    return n;
}

int main(){
    struct number a;
    a = fun();
    printf("Number = %d\n",a.num);
    return 0;
}