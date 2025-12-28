#include <stdio.h>

int main(){
    int a;
    printf("Enter size = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    int (*p)[a];
    p = &b;
    for (int i = 0; i < a-1; i++)
    {
        for (int j = 0; j < a-i-1; j++)
        {
            if ((*p)[j]>(*p)[j+1])
            {
                int temp = (*p)[j];
                (*p)[j] = (*p)[j+1];
                (*p)[j+1]=temp;
            }
        }
    }
    printf("Array = ");
    for (int i = 0; i < a; i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}