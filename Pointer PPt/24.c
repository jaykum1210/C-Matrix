#include <stdio.h>

int main(){
    int a;
    int *ptr = &a;
    printf("Enter value = ");
    scanf("%d",ptr);
    printf("Value = %d\n",*ptr);
    return 0;
}