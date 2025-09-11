#include <stdio.h>

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    int b = a/1000;
    int c = a%10;
    printf("Sum of first digit of %d = %d\n",a,b+c);
    return 0;
}