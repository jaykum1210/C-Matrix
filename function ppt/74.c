#include <stdio.h>

void mul(int b[], int a){
    for (int i = 0; i < a; i++)
    {
        b[i]*=2;
    }
    return;
}

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
    mul(b,a);
    printf("List = ");
    for (int i = 0; i < a; i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}