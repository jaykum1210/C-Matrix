#include <stdio.h>

int main(){
    int a;
    printf("Enter value = ");
    scanf("%d",&a);
    int *ptr = &a;
    printf("Address 1 = %p\n",ptr);
    ptr++;
    printf("Address 2 = %p\n",ptr);
    ptr++;
    printf("Address 3 = %p\n",ptr);
    return 0;
}