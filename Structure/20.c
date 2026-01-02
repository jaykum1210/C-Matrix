#include <stdio.h>

struct num1
{
    int n1;
};

struct num2{
    int num2;
};

int main(){
    struct num1 a;
    struct num2 b;
    printf("Enter 1st value = ");
    scanf("%d",&a.n1);
    printf("Enter 2nd value = ");
    scanf("%d",&b.num2);
    if (a.n1==b.num2)
    {
        printf("Equal\n");
    }
    else{
        printf("Not Equal\n");
    }
    return 0;
}