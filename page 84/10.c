#include <stdio.h>

int sum(int a, int b){
    if (b==1)
    {
        return a;
    }
    return a + sum(a+1,b-1);
}

int main(){
    int a,b;
    printf("Enter base number = ");
    scanf("%d",&a);
    printf("Enter number = ");
    scanf("%d",&b);
    int num = sum(a,b);
    printf("Sum = %d\n",num);
    return 0;
}