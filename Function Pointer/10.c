#include <stdio.h>

void even(int a){
    if (a%2==0)
    {
        printf("%d is even\n",a);
    }
    else{
        printf("%d is odd\n",a);
    }
}

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    void (*fp)(int);
    fp = even;
    fp(a);
    return 0;
}