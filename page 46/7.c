#include <stdio.h>

int main(){
    int a,even=0,odd=0,c =1;
    float sum = 0,b = 0;
    printf("Enter number = ");
    scanf("%d",&a);
    for (int i = 1; i <=a; i++)
    {
        if (i%2==0)
        {
            even++;
        }
        else{
            odd++;
        }
    }
    while (c<=a)
    {
        b = 1.0/c;
        sum = sum + b;
        c++;
    }
    printf("Number of even number = %d\n",even);
    printf("Number of odd number = %d\n",odd);
    printf("Sum = %0.4f\n",sum);
    return 0;
}