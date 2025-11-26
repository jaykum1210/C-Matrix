#include <stdio.h>

int sum(int a){
    if (a<10)
    {
        return a;
    }
    int b = a%10;
    return b + sum(a/10);
}

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    int b = sum(a);
    printf("Sum of all digits = %d\n",b);
    return 0;
}