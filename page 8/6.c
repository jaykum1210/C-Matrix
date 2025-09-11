#include <stdio.h>

int main(){
    int a,b,c,d,e;
    printf("Enter marks in 5 subject = ");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    int f = a+b+c+d+e;
    printf("Aggregate = %d\n",f);
    float g = (float)f/5;
    printf("Average = %0.2f\n",g);
    return 0;
}