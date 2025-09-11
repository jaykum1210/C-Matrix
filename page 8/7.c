#include <stdio.h>

int main(){
    int a;
    printf("Enter seconds = ");
    scanf("%d",&a);
    float hr = (float)a/3600;
    float min = (float)a/60;
    printf("%d seconds in hours = %0.2f, %d seconds in minutes = %0.2f, %d in seconds = %d\n",a,hr,a,min,a,a);
    printf("%d\n",30*1000+2768);
    return 0;
}