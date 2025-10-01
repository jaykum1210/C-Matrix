#include <stdio.h>

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    for (int i = 0; i < a-1; i++)
    {
        for (int j = 0; j<a-i-1; j++)
        {
            if (b[j]>b[j+1])
            {
                int temp = b[j];
                b[j] = b[j+1];
                b[j+1] = temp;
            }
        }
    }
    int c[a],t= 0, count, found;
    for (int i = 0; i < a; i++)
    {
        found = 0;
        for (int j = i-1; j>=0; j--)
        {
            if (b[i] == b[j])
            {
                found = 1;
            }
        }
        if (found !=1)
        {
            c[t++] = b[i];
        }
    }
    int d[a],u = 0;
    for (int i = 0; i < a; i++)
    {
        count = 0;
        for (int j = 0; j<a; j++)
        {
            if (c[i] == b[j])
            {
                count++;
            }
        }
        d[u++] = count;
    }
    printf("Sorted array = ");
    for (int i = 0; i < a; i++)
    {
        printf("%d ",b[i]);
    }
    printf("\n");
    for (int i = 0; i < t; i++)
    {
        printf("%d occurs %d times\n",c[i],d[i]);
    }
    return 0;
}