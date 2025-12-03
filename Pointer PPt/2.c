#include <stdio.h>

int main(){
    int a;
    printf("Enter nunber = ");
    scanf("%d",&a);
    int *ptr = &a;
    printf("Value = %d\n",*ptr);
    return 0;
}