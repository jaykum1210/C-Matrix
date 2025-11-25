#include <stdio.h>

void sqr(int a){
    for (int i = 0; i < a/2; i++)
    {
        if (i*i==a)
        {
            printf("Yes\n");
            return;
        }
        
    }
    printf("No\n");
    return;
}

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    sqr(a);
    return 0;
}