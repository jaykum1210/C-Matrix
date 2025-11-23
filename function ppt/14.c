#include <stdio.h>

int sum(int a){
    if (a==0)
    {
        return 0;
    }
    return (a%10) + sum(a/10);
}

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    int b = sum(a);
    printf("Sum of digits = %d\n",b);
    return 0;
}