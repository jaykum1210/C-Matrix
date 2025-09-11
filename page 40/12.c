#include <stdio.h>

int main(){
    int a,b=0,c=0,d=1,sum=0;
    printf("Enter number = ");
    scanf("%d",&a);
    for (int i = 1; i <=a; i++)
    {
        sum = b+c+d;
        printf("%d ",sum);
        b = c;
        c =d;
        d =sum;
    }
    return 0;
}