#include <stdio.h>

struct number
{
    long int num;
};

int main(){
    struct number n;
    printf("Enter long number = ");
    scanf("%ld",&n.num);
    printf("Number = %ld\n",n.num);
    return 0;
}