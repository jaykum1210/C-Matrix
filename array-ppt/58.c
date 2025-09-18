#include <stdio.h>

int main(){
    int a;
    printf("Enter number of elements = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter %d elemnets = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    for (int i = 0; i < a-1; i++)
    {
        for (int j = 0; j < a-i-1; j++)
        {
            if (b[j]>b[j+1])
            {
                int temp = b[j];
                b[j] = b[j+1];
                b[j+1] = temp;
            }
        }
    }
    int max = b[1]-b[0];
    for (int i = 1; i < a-1; i++)
    {
        if (max>b[i+1]-b[i])
        {
            max = b[i+1]-b[i];
        }
    }
    printf("Minimum difference = %d\n",max);
    return 0;
}