#include <stdio.h>

struct number
{
    int num;
};


int main(){
    struct number n1,n2;
    printf("Enter two values = ");
    scanf("%d%d",&n1.num,&n2.num);
    printf("Two values = %d %d",n1.num,n2.num);
    return 0;
}