#include <stdio.h>

void fun(int (*p)[],int a){
    printf("Array = ");
    for (int i = 0; i < a; i++)
    {
        printf("%d ",(*p)[i]);
    }
}

int main(){
    int a;
    printf("Enter size = ");
    scanf("%d",&a);
    int b[a];
    printf("enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    int (*p)[a];
    p = &b;
    fun(p,a);
    return 0;
}