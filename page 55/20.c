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
    for (int i = 0; i < a; i++)
    {
        int found = 0;
        for (int j = i-1; j>=0; j--)
        {
            if (b[i]==b[j])
            {
                found = 1;
                break;
            }
        }
        if (found == 1)
        {
            b[i] = 0;
        }
    }
    for (int i = 0; i < a; i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}