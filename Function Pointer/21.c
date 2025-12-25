#include <stdio.h>

void rec(int a){
    if (a==0)
    {
        return;
    }
    printf("%d ",a);
    return rec(a-1);
}

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    void (*fp)(int);
    fp = rec;
    fp(a);
    return 0;
}