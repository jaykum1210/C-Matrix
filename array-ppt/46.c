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
        int found = 0;
        for (int j = 0; j < c; j++)
        {
            if (b[i]==d[j])
            {
                found = 1;
            }
        }
        if (found == 1)
        {
            temp[t] = b[i];
            t++;
        }
    }
    printf("Intersections = ");
    for (int i = 0; i < t; i++)
    {
        printf("%d ",temp[i]);
    }
    return 0;
}