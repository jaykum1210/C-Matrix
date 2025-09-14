#include <stdio.h>

int main(){
    int a,min;
    printf("Enter number of element = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    min = b[0];
    for (int i = 0; i < a; i++)
    {
        if (b[i]<min)
        {
            min = b[i];
        }
    }
    printf("Minimum value = %d\n",min);
    return 0;
}