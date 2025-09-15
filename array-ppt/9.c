#include <stdio.h>

int main(){
    int a,temp;
    printf("Enter number of element = ");
    scanf("%d",&a);
    int b[a],c[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    for (int i = 0; i < a; i++)
    {
        temp = b[i];
        b[i] = c[a-i-1];
        c[a-i-1] = temp;
    }
    printf("Reversed array = ");
    for (int i = 0; i < a; i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}