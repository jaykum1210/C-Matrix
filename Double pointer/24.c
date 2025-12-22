#include <stdio.h>

int main(){
    int a = 10,b=20,c=30;
    int *p = &a;
    int **pp = &p;
    printf("Value 1 = %d\n",**pp);
    *pp = &b;
    printf("Value 2 = %d\n",**pp);
    *pp = &c;
    printf("Value 3 = %d\n",**pp);
    return 0;
}