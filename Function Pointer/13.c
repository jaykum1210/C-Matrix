#include <stdio.h>

int max(int a, int b){
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
    int (*fp)(int,int);
    fp = max;
    int num = fp(a,b);
    printf("Maximum value = %d\n",num);
    return 0;
}