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
    if (a%2==0)
    {
        int *p1 = &b[a/2-1];
        int *p2 = &b[a/2];
        printf("Middle number = %d %d\n",*p2,*p1);
    }
    else{
        int *p1 = &b[a/2];
        printf("Middle number = %d\n",*p1);
    }
    return 0;
}