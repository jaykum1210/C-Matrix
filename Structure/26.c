#include <stdio.h>

struct number
{
    unsigned int num;
};

int main(){
    struct number n;
    printf("Enter number = ");
    scanf("%u",&n.num);
    printf("Number = %u",n.num);
    return 0;
}