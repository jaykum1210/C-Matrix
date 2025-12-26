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
    int max = 0;
    int (*p)[a];
    p = &b;
    for (int i = 0; i < a; i++)
    {
        if ((*p)[i]>max)
        {
            max = (*p)[i];
        }
    }
    printf("Maximum value = %d\n",max);
    return 0;
}