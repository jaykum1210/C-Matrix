#include <stdio.h>

int main(){
    int a,sum=0;
    printf("Enter number = ");
    scanf("%d",&a);
    for (int i = 1; i <=a; i++)
    {
        sum+=i;
    }
    printf("Sum of n numbers = %d\n",sum);
    return 0;
}