#include <stdio.h>

int main(){
    int a,count=1,max=0;
    printf("Enter number = ");
    scanf("%d",&a);
    int b[a],c[a];
    printf("Enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    for (int i = 0; i < a; i++)
    {
        count = 1;
        if (b[i]!=-1)
        {
            for (int j = i-1; j >=0 ; j--)
            {
                if (b[i]==b[j])
                {
                    count++;
                }
            }
            if (count>max)
            {
                max = b[i];
            }
        }
    }
    printf("Maximum occurance = %d\n",max);
    return 0;
}