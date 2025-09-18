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
    for (int i = 0; i < a; i++)
    {
        if (i==0 || i == a-1)
        {
            printf("%d ",b[i]);
        }
        else{
            printf("%d ",b[i-1]+b[i+1]);
        }
    }
    return 0;
}