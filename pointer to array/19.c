#include <stdio.h>

int main(){
    int a;
    printf("Enter size = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter %d elmenets = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    int min = __INT_MAX__;
    int (*fp)[a];
    fp = &b;
    for (int i = 0; i < a; i++)
    {
        if ((*fp)[i]<min)
        {
            min = (*fp)[i];
        }
    }
    printf("Minimum Value = %d\n",min);
    return 0;
}