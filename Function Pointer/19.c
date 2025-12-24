#include <stdio.h>

int great(int a,int b){
    if (a>b)
    {
        return a;
    }
    else{
        return b;
    }
}

int main(){
    int a,b;
    printf("Enter two numbers = ");
    scanf("%d%d",&a,&b);
    int (*fp)(int, int);
    fp = great;
    int num = fp(a,b);
    printf("Greater number = %d\n",num);
    return 0;
}