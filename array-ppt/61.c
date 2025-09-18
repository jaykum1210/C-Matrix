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
        for (int j = 0; j<a-1-i; j++)
        {
            if (b[j]>b[j+1])
            {
                int temp = b[j];
                b[j] = b[j+1];
                b[j+1] = temp;
            }
        }
    }
    int max[100],t=0;
    for (int i = a-1; i >=a/2; i--)
    {
        max[t] = b[i];
        t++;
    }
    int k = 0,l=0;
    for (int i = 0; i < a; i++)
    {
        if (i%2==0)
        {
            printf("%d ",b[l]);
            l++;
        }
        else{
            printf("%d ",max[k]);
            k++;
        }
    }
    return 0;
}