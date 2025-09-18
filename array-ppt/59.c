#include <stdio.h>

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    int tar,count=0;
    printf("Enter Sum = ");
    scanf("%d",&tar);
    for (int i = 0; i < a; i++)
    {
        for (int j = i+1; j < a; j++)
        {
            int sum = b[i]+b[j];
            if (tar==sum)
            {
                count++;
            }
        }
    }
    printf("Number of pairs = %d\n",count);
    return 0;
}