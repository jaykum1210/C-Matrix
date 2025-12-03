#include <stdio.h>

int main(){
    int a;
    printf("Enter value = ");
    scanf("%d",&a);
    int *ptr1 = &a;
    int *ptr2 = ptr1;
    printf("Address = %p and Value = %d\n",ptr1,*ptr1);
    printf("Address = %p and Value = %d\n",ptr2,*ptr2);
    return 0;
}