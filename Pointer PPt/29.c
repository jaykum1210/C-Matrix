#include <stdio.h>

int main(){
    int a = 10;
    int *ptr = &a;
    int *ptr1 = ptr;
    printf("Address of ptr = %p\n",&ptr);
    printf("Address of ptr1 = %p\n",&ptr1);
    if (ptr==ptr1)
    {
        printf("Same\n");
    }
    else{
        printf("Not same\n");
    }
    return 0;
}