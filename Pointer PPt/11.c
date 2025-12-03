#include <stdio.h>

int main(){
    int a;
    printf("Enter Number = ");
    scanf("%d",&a);
    int *ptr = &a;
    printf("Address = %p\n",ptr);
    ptr++;
    printf("Address = %p\n",ptr);
    return 0;
}