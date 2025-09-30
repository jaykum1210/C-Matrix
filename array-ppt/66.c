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
    int c[100],t=0;
    for (int i = 0; i < a; i++)
    {
        if (i==a-1)
        {
            c[t] = -1;
        }
        else if (b[i]<b[i+1])
        {
            c[t] = b[t+1];
        }
        else{
            c[t] = -1;
        }
        t++;
    }
    for (int i = 0; i < a; i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}