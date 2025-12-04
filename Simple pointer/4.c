#include <stdio.h>

int main(){
    int a,b;
    printf("Enter Number = ");
    scanf("%d",&a);
    printf("Enter new number = ");
    scanf("%d",&b);
    int *p = &a;
    printf("Value = %d\n",*p);
    p = &b;
    printf("Value = %d\n",*p);
    return 0;
}