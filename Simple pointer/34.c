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
    int val;
    printf("Enter value = ");
    scanf("%d",&val);
    int new;
    printf("Enter new value = ");
    scanf("%d",&new);
    int *p = b;
    for (int i = 0; i < a; i++)
    {
        if ((*p)==val)
        {
            *p = new;
        }
        p++;
    }
    printf("Array = ");
    for (int i = 0; i < a; i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}