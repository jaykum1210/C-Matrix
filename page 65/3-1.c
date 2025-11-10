#include <stdio.h>

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    int sum = 0,b=0,i=0;
    while (a>0)
    {
        b = a%10;
        int power = 1;
        for (int j = 0; j < i; j++)
        {
            power *= 10;
        }
        sum = b*power + sum;
        a/=10;
        i++;
    }
    printf("Number = %d\n",sum);
    return 0;
}