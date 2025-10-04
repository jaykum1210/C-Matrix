#include <stdio.h>

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    int b[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    for (int i = 0; i < a-1; i++)
    {
        for (int j = 0; j<a-i-1; j++)
        {
            if (b[j]>b[j+1])
            {
                int temp = b[j];
                b[j] = b[j+1];
                b[j+1] = temp;
            }
        }
    }
    int start;
    if (a%2==0)
    {
        start = a/2;
    }
    else{
        start = a/2+1;
    }
    for (int i = 0; i < a/4; i++)
    {
        int temp = b[i+start];
        b[i+start] = b[a-i-1];
        b[a-i-1] = temp;
    }
    for (int i = 0; i < a; i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}