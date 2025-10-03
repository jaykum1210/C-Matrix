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
    int lcm, hcf,min=9999,found;
    for (int i = 0; i < a; i++)
    {
        if (b[i]<min)
        {
            min = b[i];
        }
    }
    for (int i = min; i>1; i--)
    {
        found = 0;
        for (int j = 0; j<a; j++)
        {
            if (b[j]%i!=0)
            {
                found = 1;
                break;
            }
        }
        if (found == 0)
        {
            hcf = i;
            break;
        }
    }
    printf("HCF = %d\n",hcf);
    int mul=1;
    for (int i = 0; i < a; i++)
    {
        if (b[i]!=0)
        {
            mul*=b[i];
        }
    }
    printf("LCM = %d\n",mul/hcf);
    return 0;
}