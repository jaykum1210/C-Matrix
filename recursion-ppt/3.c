#include <stdio.h>

int sum(int a){
    if (a==0)
    {
        return 0;
    }
    return a+ sum(a-1);
}

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    int b = sum(a);
    printf("Sum of %d numbers = %d\n",a,b);
    return 0;
}