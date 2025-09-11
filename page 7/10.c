#include <stdio.h>

int main(){
    int a,b;
    printf("Enter two numbers = ");
    scanf("%d%d",&a,&b);
    int c = a/b;
    printf("Remainder = %d\n",a - (b*c));
    return 0;
}