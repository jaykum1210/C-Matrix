#include <stdio.h>

int main(){
    int a,b;
    printf("Enter two numbers = ");
    scanf("%d%d",&a,&b);
    int *p1 = &a;
    int *p2 = &b;
    int **pp1 = &p1;
    int **pp2 = &p2;
    int temp = **pp1;
    **pp1 = **pp2;
    **pp2 = temp;
    printf("Number 1 = %d\n",**pp1);
    printf("Number 2 = %d\n",**pp2);
    return 0;
}