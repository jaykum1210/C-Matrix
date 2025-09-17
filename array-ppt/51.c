#include <stdio.h>

int main(){
    int a,count = 0;
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
        int found = 1;
        for (int j = i-1; j >=0; j--)
        {
            if (b[i]==b[j])
            {
                found = 0;
            }
        }
        if (found==1)
        {
            count++;
        }
        
    }
    printf("Number of distinct elements = %d\n",count);
    return 0;
}