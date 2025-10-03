#include <stdio.h>

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    int b[a],c[a];
    printf("Enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
        c[i] = b[i];
    }
    int n;
    printf("Enter n value = ");
    scanf("%d",&n);
    for (int i = 0; i <a-n; i++)
    {
        b[i] = c[i+n];
    }
    for (int i = 0; i < n; i++)
    {
        b[a-n+i] = c[i];
    }
    
    for (int i = 0; i < a; i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}