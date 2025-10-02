#include <stdio.h>

int main(){
    int a,b;
    printf("Enter number of element in array 1 = ");
    scanf("%d",&a);
    printf("Enter number of element in array 2 = ");
    scanf("%d",&b);
    int c[a],d[b];
    printf("Enter %d element in array 1 = ");
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&c[i]);
    }
    for (int i = 0; i < b; i++)
    {
        scanf("%d",&d[i]);
    }
    int t;
    if (a>b)
    {
        t = a;
    }
    else{
        t = b;
    }
    int sum[a+b],u=0;
    for (int i = 0; i < t; i++)
    {
        if (i<a&&i<b)
        {
            sum[i] = c[i]+d[i];
        }
        else if (a<i)
        {
            sum[i] = d[i];
        }
        else{
            sum[i] = c[i];
        }
    }
    for (int i = 0; i < a/2; i++)
    {
        int temp = sum[i];
        sum[i] = sum[t-i-1];
        sum[t-i-1] = temp;
    }
    for (int i = 0; i < a; i++)
    {
        printf("%d ",sum[i]);
    }
    return 0;
}