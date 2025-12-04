#include <stdio.h>

int main(){
    int a = 10;
    int *p = &a;
    int **pp = &p;
    printf("Old value = %d\n",**pp);
    int b;
    printf("Enter value = ");
    scanf("%d",&b);
    **pp = b;
    printf("Value of a = %d\n",a);
    printf("Value of pp = %d\n",**pp);
    return 0;
}