#include <stdio.h>

int per(int a){
    int sum = 0;
    for (int i = 1; i <=a/2; i++)
    {
        if (a%i==0)
        {
            sum+=i;
        }
    }
    return sum;
}

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    int (*fp)(int);
    fp = per;
    int num = fp(a);
    if (num==a)
    {
        printf("Perfect Number\n");
    }
    else{
        printf("Not a perfect number\n");
    }
    return 0;
}