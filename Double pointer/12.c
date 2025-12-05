#include <stdio.h>

int main(){
    int a,b;
    printf("Enter two numbers = ");
    scanf("%d%d",&a,&b);
    int *p1 = &a;
    int *p2 = &b;
    int c;
    printf("Enter value = ");
    scanf("%d",&c);
    int **pp1 = &p1;
    int **pp2 = &p2;
    printf("Number 1 = %d\n",(**pp1)*c);
    printf("Number 2 = %d\n",(**pp2)*c);
    return 0;
}