#include <stdio.h>

int main()
{
    int a = 10, b = 20;
    int *p = &a;
    int *p1 = &b;
    int **pp = &p;
    *pp = &b; 
    printf("%p %p\n",p,p1);
    return 0;
}