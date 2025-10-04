#include <stdio.h>

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    int b[a],min = 9999,max = 0,sum=0;
    printf("Enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    for (int i = 0; i < a; i++)
    {
        if (b[i]<min)
        {
            min = b[i];
        }
        if (b[i]>max)
        {
            max = b[i];
        }
        sum+=b[i];
    }
    float avg = (float)sum/a;
    printf("Minimum value = %d\n",min);
    printf("Maximum value = %d\n",max);
    printf("Average = %0.2f\n",avg);
    return 0;
}