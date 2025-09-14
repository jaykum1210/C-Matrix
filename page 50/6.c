#include <stdio.h>

int main(){
    int a,max;
    printf("Enter number of element = ");
    scanf("%d",&a);
    int b[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    max = b[0];
    for (int i = 0; i < a; i++)
    {
        if (b[i]>max)
        {
            max = b[i];
        }
    }
    printf("Maximum value = %d\n",max);
    return 0;
}