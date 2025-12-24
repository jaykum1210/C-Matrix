#include <stdio.h>

int message(int a){
    return a;
}

int main(){
    int a=10;
    int (*fp)(int);
    fp = message;
    int num = fp(a);
    printf("Value = %d\n",num);
    return 0;
}