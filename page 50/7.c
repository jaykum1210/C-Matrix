#include <stdio.h>

int main(){
    int a,tar,val;
    printf("Enter number of element = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    printf("Enter value = ");
    scanf("%d",&val);
    printf("Enter position = ");
    scanf("%d",&tar);
    for (int i = a; i >tar; i--)
    {
        b[i] = b[i-1];
    }
    b[tar] = val;
    a++;
    for (int i = 0; i < a; i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}