#include <stdio.h>

void rec(int b[], int a){
    if (a==-1)
    {
        return;
    }
    rec(b,a-1);
    printf("%d ",b[a]);
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
    rec(b,a-1);
    return 0;
}