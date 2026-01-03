#include <stdio.h>

int main(){
    struct number
    {
        int num;
    };
    struct number n;
    printf("Enter number = ");
    scanf("%d",&n.num);
    printf("Number = %d\n",n.num);
    return 0;
}