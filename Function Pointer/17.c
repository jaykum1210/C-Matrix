#include <stdio.h>

int po(int a, int b){
    int num = 1;
    for (int i = 0; i < b; i++)
    {
        num*=a;
    }
    return num;
}

int main(){
    int a,b;
    printf("Enter base and power = ");
    scanf("%d%d",&a,&b);
    int (*fp)(int , int);
    fp = po;
    int num = po(a,b);
    printf("Number = %d\n",num);
    return 0;
}