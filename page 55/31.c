#include <stdio.h>

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    int b[a],c[a];
    printf("Enter %d element = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    int t = 0;
    for (int i = 0; i < a; i++)
    {
        if (b[i]>=0)
        {
            c[t] = b[i];
            t++;
        }
    }
    int u=0;
    for (int i = 0; i < a; i++)
    {
        if (b[i]<0)
        {
            c[t+u] = b[i];
            u++;
        }
    }
    for (int i = 0; i < a; i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}