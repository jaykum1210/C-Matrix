#include <stdio.h>

struct num1
{
    int n1;
};

struct num2
{
    int n2;
};

void fun(struct num1 *a,struct num2 *b){
    if (a->n1 == b->n2)
    {
        printf("Equale\n");
    }
    else{
        printf("Not Equale");
    }
}

int main(){
    struct num1 a;
    struct num2 b;
    printf("Enter two values = ");
    scanf("%d%d",&a.n1,&b.n2);
    fun(&a,&b);
    return 0;
}