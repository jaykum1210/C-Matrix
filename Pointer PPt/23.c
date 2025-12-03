#include <stdio.h>

int main(){
    int a,b;
    printf("Enter old number = ");
    scanf("%d",&a);
    printf("Enter new value = ");
    scanf("%d",&b);
    int *ptr = &a;
    printf("%d -> ",*ptr);
    ptr = &b;
    printf("%d\n",*ptr);
    return 0;
}