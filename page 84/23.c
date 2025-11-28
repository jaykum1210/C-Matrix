#include <stdio.h>
#define max 5

int min(int b[]){
    for (int i = 0; i < max-1; i++)
    {
        for (int j = 0; j < max-i-1; j++)
        {
            if (b[j]>b[j+1])
            {
                int temp = b[j];
                b[j] = b[j+1];
                b[j+1] = temp;
            }
        }
    }
    return b[0];
}

int main(){
    int b[max];
    printf("Eter %d elements = ",max);
    for (int i = 0; i < max; i++)
    {
        scanf("%d",&b[i]);
    }
    int num = min(b);
    printf("Array = ");
    for (int i = 0; i < max; i++)
    {
        printf("%d ",b[i]);
    }
    printf("\nMinimum value = %d\n",num);
    return 0;
}