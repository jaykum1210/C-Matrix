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
    int val,pos;
    printf("Enter value = ");
    scanf("%d",&val);
    printf("Enetr position = ");
    scanf("%d",&pos);
    for (int i = a; i >=pos; i--)
    {
        b[i] = b[i-1];
    }
    b[pos-1] = val;
    a++;
    printf("Array = ");
    for (int i = 0; i < a; i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}