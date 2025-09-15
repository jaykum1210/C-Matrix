#include <stdio.h>

int main(){
    int a,max = 0;
    printf("Enter number = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    for (int i = 0; i < a; i++)
    {
        if (b[i]%2!=0 && b[i]>max)
        {
            max = b[i];   
        }
    }
    printf("Biggest odd number = %d\n",max);
    return 0;
}