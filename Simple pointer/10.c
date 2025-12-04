#include <stdio.h>

int main(){
    int a,b;
    printf("Enter two value = ");
    scanf("%d%d",&a,&b);
    int *ptr1 = &a;
    int *ptr2 = &b;
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    printf("Number 1 = %d\n",*ptr1);
    printf("Number 2 = %d\n",*ptr2);
    return 0;
}