#include <stdio.h>

void table(int a){
    for (int i = 1; i <=10; i++)
    {
        printf("%d\n",a*i);
    }
    return;
}

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    table(a);
    return 0;
}