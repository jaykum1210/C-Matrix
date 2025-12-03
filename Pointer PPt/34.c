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
    int *ptr = b;
    int max = 0;
    for (int i = 0; i < a; i++)
    {
        if (*ptr>max)
        {
            max = *ptr;
        }
        ptr++;
    }
    printf("Maximum = %d\n",max);
    return 0;
}