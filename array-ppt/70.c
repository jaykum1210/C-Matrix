#include <stdio.h>

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    int b[a],count=1,max= 1;
    printf("Enter %d element = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    for (int i = 1; i < a; i++)
    {
        if (b[i]>b[i-1])
        {
            count++;
            if (count>max)
            {
                max = count;
            }
        }
        else{
            count = 1;
        }
    }
    printf("Maximum Length = %d\n",max);
    return 0;
}