#include <stdio.h>

int main(){
    int a,b;
    printf("Enter first number = ");
    scanf("%d",&a);
    printf("Enter second number = ");
    scanf("%d",&b);
    int *p1 = &a;
    int *p2 = &b;
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    printf("number 1 = %d\n",*p1);
    printf("Number 2 = %d\n",*p2);
    return 0;
}