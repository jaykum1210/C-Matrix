#include <stdio.h>

int main(){
    int a;
    int *p = &a;
    int **pp = &p;
    printf("Enter value = ");
    scanf("%d",*pp);
    printf("Value = %d\n",a);
    return 0;
}