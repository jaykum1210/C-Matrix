#include <stdio.h>

int main(){
    int a,sum;
    printf("Enter the number = ");
    scanf("%d",&a);
    int b=0;
    while (b<a)
    {
        sum = a*(a+1)/2;
        b++;
    }
    b = 1;
    int c,sq = 0;
    while (b<=a)
    {
        c = b*b;
        sq = sq+c;
        b++;
    }
    b = 1;
    int cu = 0;
    while (b<=a)
    {
        c = b*b*b;
        cu = cu + c;
        b++;
    }
    printf("Sum of first n numbers = %d\n",sum);
    printf("Sum of Squareof first n numbers = %d\n",sq);
    printf("Sum of Cube of first n numbers = %d\n",cu);
    return 0;
}