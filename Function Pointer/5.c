#include <stdio.h>

int sub(int a, int b){
    return a-b;
}

int main(){
    int a,b;
    printf("Enter two numbers = ");
    scanf("%d%d",&a,&b);
    int (*fp)(int, int);
    fp = sub;
    int num = sub(a,b);
    printf("Subtraction = %d\n",num);
    return 0;
}