#include <stdio.h>
#include <math.h>

int main(){
    int p,r,t;
    float si,ci;
    printf("Enter principal = ");
    scanf("%d",&p);
    printf("Enter rate = ");
    scanf("%d",&r);
    printf("Enter time = ");
    scanf("%d",&t);
    si = (p*r*t)/100.0;
    ci = p * (pow((1 + r/100.0),t)) - p;
    printf("Simple interest = %0.2f\n",si);
    printf("Compound Interest = %0.2f\n",ci);
    return 0;
}