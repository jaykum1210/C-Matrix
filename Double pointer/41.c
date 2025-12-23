#include <stdio.h>

int main(){
    int a,b;
    printf("Enter two values = ");
    scanf("%d%d",&a,&b);
    int *p = &a;
    int **pp = &p;
    printf("Value = %d\n",**pp);
    *pp = &b;
    printf("Value = %d\n",**pp);
    return 0;
}