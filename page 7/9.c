#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter three number = ");
    scanf("%d%d%d",&a,&b,&c);
    a = a+b+c;
    b = a - (b+c);
    c = a - (b+c);
    a = a - (b+c);
    printf("Three numbers = %d %d %d\n",a,b,c);
    return 0;
}