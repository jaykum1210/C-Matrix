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
    int *p = b;
    printf("Enter value = ");
    scanf("%d",&val);
    for (int i = 0; i < a; i++)
    {
        if ((*p)==val)
        {
            printf("%d Found at index %d\n",val,i);
            return 0;
        }
        p++;
    }
    printf("%d is not present\n",val);
    return 0;
}