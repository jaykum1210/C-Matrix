#include <stdio.h>

int main(){
    int a,sum=0,c=1;
    float avg;
    printf("Enter number of elements = ");
    scanf("%d",&a);
    int b[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    for (int i = 0; i < a; i++)
    {
        if (b[i]%3==0)
        {
            sum +=b[i];
            c++;
        }
        avg = (float)sum/c;
    }
    printf("Sum = %d\n",sum);
    printf("Average = %0.2f\n",avg);
    return 0;
}