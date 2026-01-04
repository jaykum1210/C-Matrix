#include <stdio.h>

union data
{
    int a;
};

struct number
{
    union data d;
};

int main(){
    struct number n;
    printf("Enter number = ");
    scanf("%d",&n.d.a);
    printf("Values = %d\n",n.d.a);
    return 0;
}