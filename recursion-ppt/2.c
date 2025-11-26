#include <stdio.h>

void rev(int a){
    if (a==0)
    {
        return;
    }
    printf("%d ",a);
    rev(a-1);
}

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    rev(a);
    return 0;
}