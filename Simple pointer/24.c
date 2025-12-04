#include <stdio.h>

int main(){
    int a;
    printf("Enter Size = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    int max = b[0];
    int *p = b;
    for (int i = 0; i < a; i++)
    {
        if ((*p)>max)
        {
            max = (*p);
        }
        p++;
    }
    printf("Maximum = %d\n",max);
    return 0;
}