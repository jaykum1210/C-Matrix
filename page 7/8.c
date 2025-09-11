#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter three numbers = ");
    scanf("%d%d%d",&a,&b,&c);
    int temp = a;
    a = b;
    b = c;
    c = temp;
    printf("Three numbers are = %d %d %d\n",a,b,c);
    return 0;
}