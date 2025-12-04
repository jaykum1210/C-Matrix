#include <stdio.h>

int main(){
    int a;
    printf("Enter size = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    int *p = b;
    int x = 0;
    for (int i = 0; i < a; i+=2)
    {
        printf("%d ",*(p+i));
    }
    return 0;
}