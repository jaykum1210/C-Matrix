#include <stdio.h>

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    int b;
    printf("Enter 2nd number = ");
    scanf("%d",&b);
    int *ptr = &a;
    printf("First value = %d\n",*ptr);
    ptr = &b;
    printf("Second value = %d\n",*ptr);
    return 0;
}