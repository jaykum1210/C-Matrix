#include <stdio.h>

void star(int a){
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    void (*fp)(int);
    fp = star;
    fp(a);
    return 0;
}