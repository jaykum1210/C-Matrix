#include <stdio.h>

int main(){
    int a,b;
    printf("Enter number of elements in array 1 = ");
    scanf("%d",&a);
    printf("Enter number of elements in array 2 = ");
    scanf("%d",&b);
    int c[a],d[b];
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&c[i]);
    }
    for (int i = 0; i < b; i++)
    {
        scanf("%d",&d[i]);
    }
    int t=0;
    if (a>b)
    {
        t = a;
    }
    else{
        t = b;
    }
    int sum[t];
    for (int i = 0; i < t; i++)
    {
        if (i<a && i<b)
        {
            sum[i] = c[i] + d[i];
        }
        else if (i<a)
        {
            sum[i] = c[i];
        }
        else{
            sum[i] = d[i];
        }
    }
    printf("Array = ");
    for (int i = 0; i < a; i++)
    {
        printf("%d ",sum[i]);
    }
    return 0;
}