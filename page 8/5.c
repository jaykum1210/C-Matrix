#include <stdio.h>

int main(){
    int a;
    printf("Enter Basic Salary = ");
    scanf("%d",&a);
    printf("Gross Salary = %0.2f\n",a+(float)a*40/100 + (float)a*20/100);
    return 0;
}