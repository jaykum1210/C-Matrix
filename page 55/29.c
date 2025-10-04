#include <stdio.h>

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    int b[a],pos=0,neg=0,even=0,odd=0;
    printf("Enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    for (int i = 0; i < a; i++)
    {
        if (b[i]>=0)
        {
            pos++;
        }
        else{
            neg++;
        }
        if (b[i]%2==0)
        {
            even++;
        }
        else{
            odd++;
        }
    }
    printf("Positive numbers = %d\n",pos);
    printf("Negative number = %d\n",neg);
    printf("Even numbers = %d\n",even);
    printf("Odd numbers = %d\n",odd);
    return 0;
}