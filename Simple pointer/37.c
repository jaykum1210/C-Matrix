#include <stdio.h>

int main(){
    int a,b;
    printf("Enter number 1 = ");
    scanf("%d",&a);
    printf("Enter number 2 = ");
    scanf("%d",&b);
    int *p1 = &a;
    int *p2 = &b;
    int max = *p1;
    if ((*p2)>max)
    {
        max = *p2;
    }
    printf("Maximum = %d\n",max);
    return 0;
}