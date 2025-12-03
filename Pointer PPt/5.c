#include <stdio.h>

int main(){
    int a,b;
    printf("Enter old value = ");
    scanf("%d",&a);
    int *ptr = &a;
    printf("Enter new value = ");
    scanf("%d",&b);
    printf("Old Value = %d\n",*ptr);
    *ptr = b;
    printf("Value = %d\n",*ptr);
    return 0;
}