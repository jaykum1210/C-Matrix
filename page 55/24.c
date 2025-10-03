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
    int even[a],odd[a],e = 0,o = 0;
    for (int i = 0; i < a; i++)
    {
        if (i%2==0)
        {
            even[e] = b[i];
            e++;
        }
        else{
            odd[o] = b[i];
            o++;
        }
    }
    for (int i = 0; i < e-1; i++)
    {
        for (int j = 0; j<e-i-1; j++)
        {
            if (even[j]>even[j+1])
            {
                int temp = even[j];
                even[j] = even[j+1];
                even[j+1] = temp;
            }
        }
    }
    for (int i = 0; i < o-1; i++)
    {
        for (int j = 0; j<o-i-1; j++)
        {
            if (odd[j]>odd[j+1])
            {
                int temp = odd[j];
                odd[j] = odd[j+1];
                odd[j+1] = temp;
            }
        }
    }
    for (int i = 0; i < a; i++)
    {
        if (i<o)
        {
            b[i] = even[i];
        }
        else{
            b[i] = odd[i-e];
        }
    }
    for (int i = 0; i < a; i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}