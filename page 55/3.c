#include <stdio.h>

int main(){
    int a;
    printf("Enter Number = ");
    scanf("%d",&a);
    int b[a],sum=0;
    float avg;
    printf("Enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
        sum+=b[i];
    }
    avg = (float)sum/a;
    printf("Average Height = %0.2f\n",avg);
    for (int i = 0; i < a; i++)
    {
        printf("Height devaiation of %d = %0.2f\n",b[i],(float)b[i]-avg);
    }
    return 0;
}