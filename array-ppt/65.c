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
    int t = 0;
    for (int i = 0; i < a; i++)
    {
        if (b[i]%2==0)
        {
            int temp = b[i];
            b[i] = b[t];
            b[t] = temp;
            t++;
        }
    }
    for (int i = 0; i < a; i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}