#include <stdio.h>

int main(){
    int a,b;
    printf("Enter number of element in array 1 = ");
    scanf("%d",&a);
    printf("Enter number of element in array 2 = ");
    scanf("%d",&b);
    int c[a],d[b];
    printf("Enter %d element in array 1 = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&c[i]);
    }
    printf("Enter %d element in array 2 = ",b);
    for (int i = 0; i <b; i++)
    {
        scanf("%d",&d[i]);
    }
    int e[a+b],t=0,found;
    for (int i = 0; i < a; i++)
    {
        for (int j = i-1; j>=0; j--)
        {
            found = 0;
            if (c[i]==e[j])
            {
                found = 1;
                break;
            }
        }
        if (found !=1)
        {
            e[t] = c[i];
            t++;
        }
    }
    for (int i = 0; i < b; i++)
    {
        found = 0;
        for (int j = 0; j<t; j++)
        {
            if (d[i] == e[j])
            {
                found = 1;
                break;
            }
        }
        if (found!=1)
        {
            e[t] = d[i];
            t++;
        }
    }
    printf("array = ");
    for (int i = 0; i < t; i++)
    {
        printf("%d ",e[i]);
    }
    return 0;
}