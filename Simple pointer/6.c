#include <stdio.h>

int main(){
    int a,b;
    printf("Enter number 1 = ");
    scanf("%d",&a);
    printf("Enter number 2 = ");
    scanf("%d",&b);
    int *ptr1 = &a;
    int *ptr2 = &b;
    printf("Value = %d %d\n",*ptr1,*ptr2);
    return 0;
}