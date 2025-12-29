#include <stdio.h>
#include <stdlib.h>

int main(){
    float *p;
    p = (float *)malloc(sizeof(float));
    *p = 20.5;
    printf("Float value = %0.2f\n",*p);
    free(p);
    return 0;
}