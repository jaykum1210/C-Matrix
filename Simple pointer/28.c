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
    int count = 0;
    int *p = b;
    for (int i = 0; i < a; i++)
    {
        if ((*p)%2!=0)
        {
            count++;
        }
        p++;
    }
    printf("Odd numbers = %d\n",count);
    return 0;
}