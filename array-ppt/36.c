#include <stdio.h>

int main(){
    int a,min=9999,count=1,minval=-1;
    printf("Enter elements = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    for (int i = 0; i < a; i++)
    {
        if (b[i]!=-1)
        {
            count = 1;
            for (int j = i+1; j<a; j++)
            {
                if (b[i]==b[j])
                {
                    count++;
                }
            }
            if (count<min)
            {
                min = count;
                minval = b[i];
            }
        }
    }
    printf("Minimum frequent = %d\n",minval);
    return 0;
}