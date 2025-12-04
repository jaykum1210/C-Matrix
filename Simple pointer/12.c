#include <stdio.h>

int main(){
    int a;
    printf("Enter value = ");
    scanf("%d",&a);
    int *p = &a;
    printf("Value = %p\n",p);
    return 0;
}