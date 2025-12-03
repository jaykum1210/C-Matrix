#include <stdio.h>

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    int *ptr;
    ptr = &a;
    printf("Address of %d = %p\n",a,ptr);
    return 0;
}