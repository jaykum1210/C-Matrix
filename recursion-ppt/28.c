#include <stdio.h>

int mul(int a){
    if (a<10)
    {
        return a;
    }
    return (a%10)*mul(a/10);
}

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    int i = 1;
    int num = mul(a);
    printf("Product of digits = %d\n",num);
    return 0;
}