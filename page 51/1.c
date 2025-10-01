#include <stdio.h>

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    int sum=0;
    for (int i = 0; i < a; i++)
    {
        sum+=b[i];
    }
    printf("Average = %0.2f\n",(float)sum/a);
    return 0;
}