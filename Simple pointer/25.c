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
    int min = b[0];
    int *p = b;
    for (int i = 0; i < a; i++)
    {
        if ((*p)<min)
        {
            min = *p;
        }
        p++;
    }
    printf("Minimum = %d\n",min);
    return 0;
}