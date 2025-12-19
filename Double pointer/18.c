#include <stdio.h>

int main(){
    int a = 10;
    int *p = &a;
    int **pp = &p;
    int b;
    printf("Enter new value = ");
    scanf("%d",&b);
    printf("Old Value = %d\n",**pp);
    **pp = b;
    printf("New Value = %d\n",**pp);
    return 0;
}