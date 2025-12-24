#include <stdio.h>

int div(int a, int b){
    return a/b;
}

int main(){
    int a,b;
    printf("Enter two numbers = ");
    scanf("%d%d",&a,&b);
    int (*fp)(int,int);
    fp = div;
    int num = div(a,b);
    printf("Value = %d\n",num);
    return 0;
}