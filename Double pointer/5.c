#include <stdio.h>

int main(){
    int a = 10;
    int b;
    int *p = &a;
    int **pp = &p;
    printf("Enter value = ");
    scanf("%d",&b);
    *pp = &b;
    printf("Value = %d\n",**pp);
    return 0;
}