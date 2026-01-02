#include <stdio.h>

struct number
{
    short int a;
};

int main(){
    struct number n;
    printf("Enter value = ");
    scanf("%hd",&n.a);
    printf("Value = %hd\n",n.a);
    return 0;
}