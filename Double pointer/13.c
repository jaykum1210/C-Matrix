#include <stdio.h>

int main(){
    int a = 10,b = 20;
    int *p1 = &a;
    int *p2 = &b;
    int **pp1 = &p1;
    int **pp2 = &p2;
    if (**pp1==**pp2)
    {
        printf("Equale\n");
    }
    else{
        printf("Not Equale\n");
    }
    return 0;
}