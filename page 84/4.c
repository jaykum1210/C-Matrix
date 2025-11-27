#include <stdio.h>

int rec(int a,int b){
    if (b==1)
    {
        return a+2;
    }
    return a + rec(a+2, b-1);
}

int main(){
    int a,b;
    printf("Enter base = ");
    scanf("%d",&a);
    printf("Enter number = ");
    scanf("%d",&b);
    int num = rec(a,b);
    printf("Sum = %d\n",num);
    return 0;
}