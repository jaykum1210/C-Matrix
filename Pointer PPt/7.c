#include <stdio.h>

int main(){
    int a;
    printf("Enter value = ");
    scanf("%d",&a);
    int *ptr = &a;
    int *ptr2 = ptr;
    printf("value = %d, %d\n",*ptr,*ptr2);
    return 0;
}