#include <stdio.h>

struct number
{
    int a;
};

int main(){
    struct number n;
    printf("Enter number = ");
    scanf("%d",&n.a);
    printf("Number = %d\n",n.a);
    return 0;
}