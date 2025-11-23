#include <stdio.h>

void even(int a){
    if (a%2==0)
    {
        printf("Even\n");
    }
    else{
        printf("Odd\n");
    }
}

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    even(a);
    return 0;
}