#include <stdio.h>

int main(){
    int a;
    printf("Enter number of element in array 1 = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter %d element in array 1 = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    int c;
    printf("Enter number of element in array 2 = ");
    scanf("%d",&c);
    int d[c];
    printf("Enter %d element in array 2 = ",c);
    for (int i = 0; i < c; i++)
    {
        scanf("%d",&d[i]);
    }
    int temp[100];
    int t =0;
    for (int i = 0; i < a; i++)
    {
        temp[i] = b[i];
        t++;
    }
    for (int i = 0; i < c; i++)
    {
        int found = 1;
        for (int j = 0; j<t; j++)
        {
            if (d[i]==temp[j])
            {
                found=0;
            }
        }
        if (found==1)
        {
            temp[t] = d[i];
            t++;
        }
    }
    printf("Union array = ");
    for (int i = 0; i < t; i++)
    {
        printf("%d ",temp[i]);
    }
    return 0;
}