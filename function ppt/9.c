#include <stdio.h>

void pos(int a){
    if (a>0)
    {
        printf("Positive\n");
    }
    else if (a<0)
    {
        printf("Negative\n");
    }
    else{
        printf("Equale to 0\n");
    }
}

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    pos(a);
    return 0;
}