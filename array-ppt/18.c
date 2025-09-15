#include <stdio.h>

int main(){
    int a,found = 0;
    printf("Enter number of elements = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    for (int i = 0; i < a; i++)
    {
        found = 0;
        if (b[i]==1)
        {
            continue;
        }
        else{
            for (int j = 2; j<b[i]; j++)
            {
                if (b[i]%j==0)
                {
                    found = 1;
                    break;
                }
            }
            if (found == 1)
            {
                printf("%d ",b[i]);
            }
        }
    }
    return 0;
}