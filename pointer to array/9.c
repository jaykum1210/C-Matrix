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
    int (*p)[a];
    p = &b;
    int count = sizeof(*p)/sizeof((*p)[0]);
    printf("Number = %d\n",count);
    return 0;
}