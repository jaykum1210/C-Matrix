#include <stdio.h>

int main(){
    int a;
    printf("Enter number of elements = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    int c[10] = {0};
    for (int i = 0; i < a; i++)
    {
        c[b[i]]++;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d = %d\n",i,c[i]);
    }
    return 0;
}