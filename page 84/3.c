#include <stdio.h>

int sum(int a, int i){
    if (a==0)
    {
        return 0;
    }
    return i + sum(a-1,i+2);
}

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    int i = 1;
    int num = sum(a,i);
    printf("Sum = %d\n",num);
    return 0;
}