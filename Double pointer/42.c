#include <stdio.h>

int main(){
    int a;
    printf("Enter value = ");
    scanf("%d",&a);
    int *p = &a;
    int **pp = &p;
    if (**pp<0)
    {
        (**pp)*=-1;
    }
    printf("Value = %d\n",**pp);
    return 0;
}