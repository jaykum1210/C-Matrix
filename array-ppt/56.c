#include <stdio.h>

int main(){
    int a;
    printf("Enter number of elements = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    int temp[100];
    int t=0;
    for (int i = 0; i < a; i++)
    {
        if (b[i]%2!=0)
        {
            temp[t] = b[i];
            t++;
        }
    }
    for (int i = 0; i < t/2; i++)
    {
        int max = temp[t-i-1];
        temp[t-i-1] = temp[i];
        temp[i] = max;
    }
    int k = 0;
    for (int i = 0; i < a; i++)
    {
        if (b[i]%2==0)
        {
            printf("%d ",b[i]);
        }
        else{
            printf("%d ",temp[k]);
            k++;
        }
    }
    return 0;
}