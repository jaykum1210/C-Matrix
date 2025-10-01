#include <stdio.h>

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter %d element = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    int even=0,odd=0;
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
    printf("Sum of element at even position = %d\n",even);
    printf("Sum of element at odd position = %d\n",odd);
    return 0;
}