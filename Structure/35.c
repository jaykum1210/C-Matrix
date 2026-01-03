#include <stdio.h>

struct number
{
    int n;
};

int main(){
    struct number a;
    printf("Enter number = ");
    scanf("%d",&a.n);
    printf("Number = %d\n",a.n);
    return 0;
}