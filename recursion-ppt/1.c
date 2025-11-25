#include <stdio.h>

void rev(int a){
    if (a==0)
    {
        return;
    }
    rev(a-1);
    printf("%d ",a);
}

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    rev(a);
    return 0;
}