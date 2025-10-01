#include <stdio.h>

int main(){
    int a,b;
    printf("Enter number of element in first array = ");
    scanf("%d",&a);
    printf("Enter number of element in second array = ");
    scanf("%d",&b);
    int c[a],d[b];
    printf("Enter %d element in array 1 = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&c[i]);
    }
    printf("Enter %d elements in array 2 = ",b);
    for (int i = 0; i < b; i++)
    {
        scanf("%d",&d[i]);
    }
    for (int i = 0; i < a-1; i++)
    {
        for (int j = 0; j<a-i-1; j++)
        {
            if (c[j]>c[j+1])
            {
                int temp = c[j];
                c[j] = c[j+1];
                c[j+1] = temp;
            }
        }
    }
    for (int i = 0; i < b-1; i++)
    {
        for (int j = 0; j < b-i-1; j++)
        {
            if (d[j]>d[j+1])
            {
                int temp = d[j];
                d[j] = d[j+1];
                d[j+1] = temp;
            }
        }
    }
    int x[a+b],t=0;
    for (int i = 0; i < a; i++)
    {
        x[t] = c[i];
        t++;
    }
    for (int i = 0; i < b; i++)
    {
        int found = 0;
        for (int j = 0; j<t; j++)
        {
            if (d[i]==x[j])
            {
                found = 1;
                break;
            }
        }
        if (!found)
        {
            x[t] = d[i];
            t++;
        }
    }
    for (int i = 0; i < t; i++)
    {
        printf("%d ",x[i]);
    }
    return 0;
}