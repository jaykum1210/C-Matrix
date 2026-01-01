#include <stdio.h>

struct number
{
    int num;
};

struct number n;

int main(){
    printf("Enter value = ");
    scanf("%d",&n.num);
    printf("Number = %d\n",n.num);
    return 0;
}