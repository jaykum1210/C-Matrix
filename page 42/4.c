#include <stdio.h>
#include <math.h>

int main(){
    int a;
    float b = 0;
    printf("Enter number = ");
    scanf("%d",&a);
    for (int i = 1; i <=7; i++)
    {
        if (i==1)
        {
            b = b+pow((a-1.0)/a,i);
        }
        else{
            b = b+(1.0/2)*pow((a-1.0)/a,i);
        }
    }
    printf("Log(%d) = %0.4f\n",a,b);
    return 0;
}