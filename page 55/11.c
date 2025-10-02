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
    int val;
    printf("Enter the number want to insert = ");
    scanf("%d",&val);
    for (int i = a; i >0; i--)
    {
        b[i] = b[i-1];
    }
    b[0] = val;
    a++;
    for (int i = 0; i < a; i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}