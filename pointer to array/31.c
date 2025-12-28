#include <stdio.h>

int main(){
    int a;
    printf("Enter size = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    int count = 0;
    int (*p)[a];
    p = &b;
    for (int i = 0; i < a; i++)
    {
        if ((*p)[i]==0 || (*p)[i]==1)
        {
            continue;
        }
        else{
            int found = 0;
            for (int j = 2; j <=(*p)[i]/2; j++)
            {
                if ((*p)[i]%j==0)
                {
                    found = 1;
                    break;
                }
            }
            if (found==0)
            {
                count++;
            }
        }
    }
    printf("Number of prime numbers = %d\n",count);
    return 0;
}