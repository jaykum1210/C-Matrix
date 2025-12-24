#include <stdio.h>

int main(){
    int a = 10;
    int *p = &a;
    int **pp = &p;
    int n;
    printf("Enter number of times = ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        (**pp)++;
        ++(**pp);
    }
    printf("Value = %d\n",**pp);
    return 0;
}