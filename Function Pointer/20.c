#include <stdio.h>

void pos(int a){
    if (a>0)
    {
        printf("Positive\n");
    }
    else{
        printf("Negative\n");
    }
}

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    void (*fp)(int);
    fp = pos;
    fp(a);
    return 0;
}