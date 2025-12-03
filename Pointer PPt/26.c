#include <stdio.h>

int main(){
    int a;
    printf("Enter value = ");
    scanf("%d",&a);
    int *ptr1 = &a;
    int **ptr2 = &ptr1;
    printf("Value of a = %d\n",a);
    printf("Address of a = %p\n",&a);
    printf("ptr1 Holds = %p\n",ptr1);
    printf("Value of ptr1 = %d\n",*ptr1);
    printf("Address of ptr1 = %p\n",&ptr1);
    printf("ptr2 Holds = %p\n",ptr2);
    printf("Value of ptr2 = %d\n",**ptr2);
    printf("Address of ptr2 = %p\n",&ptr2);
    return 0;
}