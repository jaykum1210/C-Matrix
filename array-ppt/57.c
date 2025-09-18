#include <stdio.h>

int main(){
    int a,min=9999,max=0;
    printf("Enter number of element = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    for (int i = 0; i < a; i++)
    {
        if (b[i]>max)
        {
            max = b[i];
        }
        if (b[i]<min)
        {
            min = b[i];
        }
    }
    printf("Biggest Difference = %d\n",max-min);
    return 0;
}