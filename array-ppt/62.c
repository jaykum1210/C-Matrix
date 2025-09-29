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
    int count = 0;
    for (int i = 0; i < a; i++)
    {
        if (b[i]!=0)
        {
            b[count] = b[i];
            count++;
        }
    }
    for (int i = 0; i < a; i++)
    {
        if (i<count)
        {
            printf("%d ",b[i]);
        }
        else{
            printf("%d ",0);
        }
    }
    return 0;
}