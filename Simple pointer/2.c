#include <stdio.h>

int main(){
    int a;
    printf("Enter value = ");
    scanf("%d",&a);
    int *p = &a;
    printf("Address = %p\n",p);
    return 0;
}