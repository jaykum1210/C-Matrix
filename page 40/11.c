#include <stdio.h>

int main(){
    int a,b =1, c =1    ,sum =0;
    printf("Enter number = ");
    scanf("%d",&a);
    for (int i = 0; i < a; i++)
    {
        sum = b+c;
        printf("%d ",b);
        b = c;
        c = sum;
    }
    return 0;
}