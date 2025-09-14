#include <stdio.h>

int main(){
    int a,even=0,odd=0;
    printf("Enter number of elements = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
        if (b[i]%2==0)
        {
            even++;
        }
        else{
            odd++;
        }
    }
    printf("Number of even elements = %d\n",even);
    printf("Number of odd elements = %d\n",odd);
    return 0;
}