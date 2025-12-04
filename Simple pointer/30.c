#include <stdio.h>

int main(){
    int a;
    printf("Enter Size = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter %d Elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    int *p = b;
    printf("Array = ");
    for (int i = 0; i < a; i++)
    {
        printf("%d ",(*p)*2);
        p++;
    }
    return 0;
}