#include <stdio.h>

int main(){
    int a,even=0,odd=0;
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
        if (i%2==0)
        {
            even+=b[i];
        }
        else{
            odd+=b[i];
        }
    }
    printf("Sum of all even index values = %d\n",even);
    printf("Sum of all odd index values = %d\n",odd);
    return 0;
}