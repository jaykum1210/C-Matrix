#include <stdio.h>

int main(){
    int a,b;
    printf("Enter number 1 = ");
    scanf("%d",&a);
    printf("Enter number 2 = ");
    scanf("%d",&b);
    int *ptr1 = &a;
    int *ptr2 = &b;
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2  = temp;
    printf("Number 1 = %d\n",*ptr1);
    printf("Number 2 = %d\n",*ptr2);
    return 0;
}