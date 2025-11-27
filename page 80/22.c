#include <stdio.h>

int sum(int a){
    if (a<10)
    {
        return a;
    }
    return (a%10) + sum(a/10);
}

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    int num = sum(a);
    printf("Sum of all digtits of %d = %d\n",a,num);
    return 0;
}