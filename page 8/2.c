#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter three numbers = ");
    scanf("%d%d%d",&a,&b,&c);
    printf("Number = %d\n",a*100 + b*10 + c);
    return 0;
}