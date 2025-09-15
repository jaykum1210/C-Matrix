#include <stdio.h>

int main(){
    int a,count =0;
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
        if (b[i]%3==0)
        {
            count++;
        }
    }
    printf("Number of elements divisible by 3 = %d\n",count);
    return 0;
}