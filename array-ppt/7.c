#include <stdio.h>

int main(){
    int a,neg=0,even=0,odd=0;
    printf("Enter number of element = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
        if (b[i]<0)
        {
            neg++;
        }
        else{
            if (b[i]%2==0)
            {
                even++;
            }
            else{
                odd++;
            }
        }
    }
    printf("Negative number = %d\n",neg);
    printf("Even numbers = %d\n",even);
    printf("Odd numbers = %d\n",odd);
    return 0;
}