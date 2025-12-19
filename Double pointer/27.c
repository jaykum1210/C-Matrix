#include <stdio.h>

int main(){
    int a = 10;
    int b = 30;
    int c = 40;
    int *p = &a;
    int *p1 = &b;
    int *p3 = &c;
    int **pp = &p;
    printf("Value = %d ",*p);
    p = &a;
    printf("%d ",**pp);
    p = &b;
    printf("%d\n",**pp);
    return 0;
}