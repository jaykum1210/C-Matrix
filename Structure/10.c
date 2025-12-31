#include <stdio.h>

struct number {
    int a;
};

int main(){
    struct number n1,n2;
    printf("Enter two numbers = ");
    scanf("%d%d",&n1.a,&n2.a);
    printf("Number = %d %d\n",n1.a,n2.a);
    return 0;
}