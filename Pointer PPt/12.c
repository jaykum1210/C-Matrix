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
    int *ptr1 = &b[0];
    int *ptr2 = &b[a-1];
    int diff = ptr2-ptr1;
    printf("Difference = %d\n",diff);
    return 0;
}