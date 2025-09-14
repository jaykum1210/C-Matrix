#include <stdio.h>

int main(){
    int a,sum=0;
    float avg;
    printf("Enter number of elements = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
        sum +=b[i];
    }
    avg = sum/a;
    printf("Average - %0.2f\n",avg);
    return 0;
}