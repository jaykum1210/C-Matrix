#include <stdio.h>

void pos(){
    printf("Positive\n");
}

void neg(){
    printf("Negative\n");
}

void check(int a){
    if (a>0)
    {
        pos();
    }
    else if (a<0)
    {
        neg();
    }
    else{
        printf("Zero");
    }
}

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    void (*fp)(int);
    fp = check;
    fp(a);
    return 0;
}