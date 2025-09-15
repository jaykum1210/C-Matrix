#include <stdio.h>

int main(){
    int a,min=99999;
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
        if (b[i]%2==0 && min>b[i])
        {
            min = b[i];
        }
        
    }
    printf("Minimum Even Number = %d\n",min);
    return 0;
}