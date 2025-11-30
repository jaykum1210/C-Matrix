#include <stdio.h>

int sum(int a){
    if (a==0)
    {
        return 0;
    }
    return a%10 + sum(a/10);
}

int mul(int a){
    if (a==0)
    {
        return 1;
    }
    return (a%10)*mul(a/10);
}

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    if (!(a>=100000 && a<=999999))
    {
        printf("Enter 6 digit number\n");
        return 0;
    }
    int num;
    if (a%2==0)
    {
        num = sum(a);
    }
    else{
        num = mul(a);
    }
    printf("Number = %d\n",num);
    return 0;
}