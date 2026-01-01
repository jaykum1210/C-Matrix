#include <stdio.h>

struct number
{
    int num;
};

void display(struct number n){
    printf("Number = %d\n",n.num);
}

int main(){
    struct number n;
    printf("Enter number = ");
    scanf("%d",&n.num);
    display(n);
    return 0;
}