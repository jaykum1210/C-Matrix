#include <stdio.h>

void mod(int **pp,int b){
    **pp = b;
}

int main(){
    int a = 10;
    int *p = &a;
    int **pp = &p;
    void (*fn)(int **,int);
    fn = mod;
    int b;
    printf("Enter new value = ");
    scanf("%d",&b);
    printf("Old value = %d\n",**pp);
    fn(pp,b);
    printf("New value = %d\n",**pp);
    return 0;
}