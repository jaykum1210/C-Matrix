#include <stdio.h>

int main(){
    int a;
    printf("Enter Number = ");
    scanf("%d",&a);
    int *p = &a;
    printf("Value = %d\n",*p);
    return 0;
}