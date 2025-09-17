#include <stdio.h>

int main(){
    int a,tar;
    printf("Enter number = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    int temp[a];
    for (int i = 0; i < a; i++)
    {
        temp[i] = b[i];
    }
    printf("Enter position = ");
    scanf("%d",&tar);
    tar = tar%a;
    for (int i = 0; i < a; i++)
    {
        b[i] = temp[(i+tar)%a];
    }
    
    
    for (int i = 0; i < a; i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}